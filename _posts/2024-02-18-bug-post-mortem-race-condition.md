---
layout: post
title: "Bug Postmortem: Race Condition"
toc: true
---

I like re-analyzing hard-to-find bugs (bugs that aren't immediately found after a second inspection of the code) because they reveal a logical fault in our mental models of code. Reflecting on how these bugs came to be lets me fix these faults, as well as think of "antidotes"—changes I can make to my coding style to prevent the bugs in the future.

The following snippet is a concurrent queue in C++ and a simple test testing for a race condition:

```c++
#include <array>
#include <iostream>
#include <format>
#include <semaphore>
#include <unordered_set>
#include <thread>
#include <vector>

template <typename T, size_t N>
class ConcurrentQueue {
public:
    template <typename U>
    auto push(U &&value) -> void {
        can_push.acquire();
        queue_lock.acquire();
        queue[back] = value;
        back = (back + 1) % N;
        queue_lock.release();
        can_pop.release();
    }

    auto pop() -> T {
        can_pop.acquire();
        queue_lock.acquire();
        auto value = queue[front];
        front = (front + 1) % N;
        queue_lock.release();
        can_push.release();
        return value;
    }

private:
    std::array<T, N> queue {};
    std::size_t front {0}, back {0};
    std::binary_semaphore queue_lock {1};
    std::counting_semaphore<N> can_push {N}, can_pop {0};
};

void test_multiple_threads() {
    std::cout << "Running multiple threads test...";
    constexpr auto queue_size = 100;
    constexpr auto num_threads = 10;
    constexpr auto values_per_thread = 1000;

    auto queue = ConcurrentQueue<int, queue_size> {};
    auto threads = std::vector<std::thread> {};

    for (auto i = 0; i < num_threads; ++i) {
        threads.emplace_back([&] {
            for (int j = 0; j < values_per_thread; ++j) {
                queue.push(i * values_per_thread + j);
            }
        });
    }

    auto popped_values = std::vector<int> {};
    auto mutex = std::mutex {};
    for (auto i = 0; i < num_threads; ++i) {
        threads.emplace_back([&] {
            for (int j = 0; j < values_per_thread; ++j) {
                auto lock = std::lock_guard<std::mutex> {mutex};
                popped_values.push_back(queue.pop());
            }
        });
    }

    for (auto &thread : threads) {
        thread.join();
    }

    auto popped_set = std::unordered_set<int> {popped_values.begin(), popped_values.end()};
    auto constexpr expected_unique_values = num_threads * values_per_thread;
    if (popped_set.size() == num_threads * values_per_thread) {
        std::cout << "[PASS]\n";
    } else {
        std::cout << std::format("[FAIL]\nExpected {} unique values, got {}\n",
            expected_unique_values, popped_set.size());
    }
}

int main() {
    test_multiple_threads();
    return 0;
}
```

The code has a bug: we push 10k unique values (1k for each of the 10 threads) to the queue and expect to pop 10k from it. But, after running and joining all the threads, we get back much fewer: around ~1k. The code is compiled with C++20 and the bug isn't a compiler/architecture bug. Can you spot it?

## Solution

The bug is in the loop where we spawn the threads:

```c++
for (auto i = 0; i < num_threads; ++i) {
    threads.emplace_back([&] {
        for (int j = 0; j < values_per_thread; ++j) {
            queue.push(i * values_per_thread + j);
        }
    });
}
```

The lambda captures everything in the scope where the lambda is defined by reference `[&]`. This is desirable for `queue`: it allows every thread to refer to and push to the same `queue` instance. But, there is another variable used in the thread that shouldn't be captured by reference: the `i` outer-loop counter variable. If the outer-loop increments `i` before the `i`th thread uses it to push to the queue, the change will be reflected in the thread. In the worst case, every thread is spawned before any thread pushes to the queue, and `i == num_threads` in every thread.

The solution is to explicitly capture `i` by value.

```c++
for (auto i = 0; i < num_threads; ++i) {
    threads.emplace_back([&, i] {
        for (int j = 0; j < values_per_thread; ++j) {
            queue.push(i * values_per_thread + j);
        }
    });
}
```

## Reflections

The bug is more than just a careless one. I think if the culprit variable were not the loop counter variable, something like

```c++
int thread_id = 0;
for (auto i = 0; i < num_threads; ++i) {
    threads.emplace_back([&] {
        for (int j = 0; j < values_per_thread; ++j) {
            queue.push(thread_id * values_per_thread + j);
        }
    });
    thread_id += 1;
}
```

it would be much easier to notice that we are capturing by reference something that is being modified outside the thread. Detecting the loop variable race-condition is tricky because in single-threaded code, in our mental model of for-loops, the loop variable is a constant with respect to each iteration. Indeed, modifying the loop variable within an iteration raises (or should raise) immediate red-flags:

```c++
for (int i = 0; i < 100; ++i) {
    if (condition()) {
        i += 1; // !!!
    }
}
```

## Antidotes

There are several coding-style changes that can fix this, ordered from most obvious and least invasive (requiring the least style change, thus most likely ineffective) to least obvious and most invasive.

**1. Variables that "look" constant in single-threaded environments may not be in multi-threaded ones.**

This applies not only to loop variables, but also something like function arguments:

```c++
auto count_vec(const std::vector<int> &vec) {
    // vec is the same as when we entered the function... right?
    return vec.size();
}
```
in a single-threaded program, the comment holds true; `bar` is even marked `const`! But in a multi-threaded program, we could have something like:

```c++
int main() {
    auto vec = std::vector<int> {1, 2, 3, 4, 5};
    auto future = std::async(std::launch::async, count_vec, vec);
    vec.clear();
    std::cout << future.get(); // maybe 0, maybe 5
    return 0;
}
```

This is tricky because if one only looks at `count_vec` it looks as though there can't be any race-conditions.

Unfortunately this antidote is not all that useful and essentially amounts to saying "be careful". But, it does emphasize that any sort of reference—even `const` references—are dangerous for race-conditions.


**2. In multi-threaded code, pass/capture by value by default.**

This is [CP.31 in the C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#cp31-pass-small-amounts-of-data-between-threads-by-value-rather-than-by-reference-or-pointer). It would have prevented the bug and the above `count_vec` race condition. It also cuts to the core of why we even thought to write the buggy code. In single-threaded code, we are taught to default to passing by `const &` (for all but primitive types) since it combines the cheapness of a reference with the constness of a value. In multi-threaded code though, we lose this constness guarantee.

**3. Don't use implicit `[&]`, `[=]` lambda capturing**

The [Core Guidelines don't forbid implicit capturing](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f52-prefer-capturing-by-reference-in-lambdas-that-will-be-used-locally-including-passed-to-algorithms) and have many examples of it throughout the guidelines. While it would have prevented the bug, it may be a bit strict to forbid entirely the use of this language feature, especially since its so ergonomic and (2.) already covers this case.

**4. Avoid mutation**

Obviously this one is not feasible, but it provides yet another case for why pure, functional programming is safer and less error-prone :)

---

In practice, (1) is great to keep in mind and (2) is a perfect antidote. (3) might be excessive, especially since it is subsumed by (2), but it might be good to consider for an exceptionally safe coding style.
