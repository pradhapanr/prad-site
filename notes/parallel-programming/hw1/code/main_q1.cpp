#include <vector>
#include <chrono>
#include <cassert>
#include <iostream>

#include "SquareMatrix.hpp"
#include "SquareMatrixView.hpp"

auto lower_triangular_inverse(SquareMatrixView const &matrix, size_t multithread_threshold = 2) 
    -> SquareMatrix;

auto make_type_1_unimodal_matrix(size_t n) -> SquareMatrix {
    auto result = SquareMatrix {n};
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < i; ++j) {
            result.at(i, j) = -1;
        }
        result.at(i, i) = 1;
    }
    return result;
}

auto make_type_2_unimodal_matrix(size_t n) -> SquareMatrix {
    auto result = SquareMatrix {n};
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < i; ++j) {
            result.at(i, j) = (j == i - 1 ? -1 : 1);
        }
        result.at(i, i) = 1;
    }
    return result;
}

auto make_type_3_unimodal_matrix(size_t n) -> SquareMatrix {
    auto result = SquareMatrix {n};
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < i; ++j) {
            result.at(i, j) = 1;
        }
        result.at(i, i) = 1;
    }
    return result;
}

bool test_lower_triangular_inverse(SquareMatrixView const &A, size_t multithread_threshold = 1) {
    auto const n = A.size();
    auto const A_inv = lower_triangular_inverse(A, multithread_threshold);
    auto const I = A * A_inv;
    auto success = true;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            if (i == j) {
                success &= I.at(i, j) == 1;
            } else {
                success &= I.at(i, j) == 0;
            }
        }
    }
    return success;
}

auto test_correctness() {
    auto const tests = std::vector<SquareMatrix> {
        make_type_1_unimodal_matrix(4),
        make_type_2_unimodal_matrix(4),
        make_type_3_unimodal_matrix(4),
    };

    auto test_id = 0;
    for (size_t multithread_threshold = 1; multithread_threshold <= 4; multithread_threshold *= 2) {
        for (auto const &test : tests) {
            if (test_lower_triangular_inverse(test, multithread_threshold)) {
                std::cout << "TEST " << test_id << " PASSED\n";
            } else {
                std::cout << "TEST FAILED\n"
                    << "multithread_threshold: " << multithread_threshold << "\n"
                    << "test:\n" << test << "\n";
            }
            ++test_id;
        }
    }
}

auto test_performance() {
    auto tests = std::vector<SquareMatrix> {};
    for (size_t n = 4; n <= 2048; n *= 2) {
        tests.emplace_back(make_type_1_unimodal_matrix(n));
    }

    for (size_t threshold = 32; threshold <= 128; threshold *= 2) {
        for (auto const &test : tests) {
            auto const start = std::chrono::high_resolution_clock::now();
            lower_triangular_inverse(test, threshold);
            auto const end = std::chrono::high_resolution_clock::now();
            std::cout << "multithread_threshold: " << threshold << " "
                      << "time: "
                      << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
                      << "ms\n"
                      << std::endl;
        }
    }
}

int main() {
    test_correctness();
    test_performance();
}
