---
title: Zero-Cost Polymorphism
layout: post
toc: true
---

## Run-time Polymorphism

In almost all languages, polymorphism incurs a runtime cost because of dynamic dispatch. In C++ for example, in the following code:

```c++
class Animal {
public:
    virtual auto speak() -> void const = 0;
};

class Dog {
public:
    virtual auto speak() -> void const override {
        std::cout << "WOOF\n";
    }
};

class Cat {
public:
    virtual auto speak() -> void const override {
        std::cout << "meow...\n";
    }
};

auto speak_twice(Animal *animal) {
    animal->speak();
    animal->speak();
}

int main() {
    auto dog = std::make_unique<Dog>();
    auto cat = std::make_unique<Cat>();
    
    speak_twice(dog); // WOOF WOOF
    speak_twice(cat); // meow... meow...
}
```

the compiler adds one pointer member to each class (the virtual table pointer), and each virtual function call requires an extra level of indirection (through the virtual table pointer). Any implementation of runtime polymorphism in any language, by definition, must incur some sort of overhead at runtime similar to the above to deduce the type of the object.

In the above case, we already knew the types of the animals at compile-time but we still paid the cost of polymorphism at runtime. This goes against one of C++'s core principles of "pay for what you use". We show how to achieve polymorphism at compile-time for a true zero-cost abstraction.

## Compile-Time Polymorphism

In the following pattern, because all code is generated at compile-time, the abstraction is free at runtime.

### Curiously Recurring Template Pattern

We rewrite the base class as a template that accepts a derived class as a template parameter. To call overridden methods of the base class, the base class first casts its own `this` pointer to a pointer to the derived type, and then uses it to call a method implemented in the derived type. The above snippet becomes:

```c++
template <typename Derived>
class Animal {
public:
    auto speak() -> void {
        static_cast<Derived *>(this)->speak_impl(); 
    }
};

class Dog : public Animal<Dog> {
public:
    auto speak_impl() -> void {
        std::cout << "WOOF";
    }
};

class Cat : public Animal<Dog> {
public:
    auto speak_impl() -> void {
        std::cout << "meow...";
    }
};

template <typename T>
auto speak_twice(const Animal<T> &animal) {
    animal->speak(); animal->speak();
}

int main() {
    auto dog = Dog {};
    auto cat = Cat {};

    speak_twice(dog); // WOOF WOOF
    speak_twice(cat); // meow... meow...
}
```
This allows us to define a generic interface (e.g. `Animal`) without incurring any runtime cost.

The above pattern is a well-known idiom in C++ called the ["curiously recurring template pattern"](https://en.wikipedia.org/wiki/Curiously_recurring_template_pattern).

## Example: Allocator

For a real-application of CRTP, consider the following interface for an allocator.

```c++
/**
 * @brief CRTP base class for an allocator of type T.
 * 
 * @tparam Derived The derived class implementation.
 * @tparam T The type allocated by this allocator.
 */
template <typename Derived>
class Allocator;

template <template <typename> class Derived, typename T>
class Allocator<Derived<T>> {
public:
    using value_type = T;

    auto allocate(size_t size) -> T * {
        return static_cast<Derived<T> *>(this)->allocate_impl(size);
    }

    auto deallocate(T *ptr, size_t size = 0) -> void {
        static_cast<Derived<T> *>(this)->deallocate_impl(ptr, size);
    }

    /**
     * @brief Add memory to be managed by the allocator. 
     * 
     * @param ptr pointer to the start of the contiguous memory region
     * @param size size of the memory region (as the number of T's)
     */
    auto add_memory(T *ptr, size_t size) -> void {
        static_cast<Derived<T> *>(this)->add_memory_impl(ptr, size);
    }
};
```

Note that we use a template specialization to extract the type `T` of the elements managed by the allocator. Implementing the interface using a free list allocator would then look like:

```c++
template <typename T>
class FreeListAllocator : public Allocator<FreeListAllocator<T>> {
public:
    FreeListAllocator() = default;

    FreeListAllocator(T *base, std::size_t size);
    
    auto allocate_impl(std::size_t request) -> T *;
    
    auto deallocate_impl(T *base, std::size_t size) -> void;

    auto add_memory_impl(T *base, std::size_t size) -> void;

private:
    struct FreeBlockHeader;
    struct UsedBlockHeader;

    FreeBlockHeader *head = nullptr;
};

#include "FreeListAllocator.tpp" // template implementation
```

Finally, we can then choose which style of allocator is used: all at compile-time.

```c++
template <typename Allocator>
auto vmalloc(size_t size, const Allocator &allocator) -> Allocator::value_type * {
    return allocator.allocate(size);
}

int main() {
    auto allocator = FreeListAllocator<int> {};
    auto ptr = vmalloc(0x1000, allocator);
    // ...
}
```