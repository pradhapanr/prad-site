#include <vector>
#include <iostream>
#include <cuda_runtime.h>
#include <random>
#include <string>
#include <chrono>

#include "poly_mul.hpp"

void test_correctness(int block_size = 256) {
    auto generate_polynomial = [](int degree) {
        static auto rd = std::random_device {};
        static auto gen = std::mt19937(rd());
        static auto dis = std::uniform_int_distribution<int>(-1, 1);
        auto poly = std::vector<int>(degree + 1, 1);
        for (int i = 0; i < degree + 1; ++i) {
            poly[i] = dis(gen);
        }
        return poly;
    };

    std::cout << "Running correctness tests...\n";
    auto const test_degrees = std::vector {
        1, 2, 4, 8, 
        16, 32, 64, 128, 
        256, 512, 1024, 2048, 
        (1 << 16)
    };
    for (int const degree : test_degrees) {
        auto poly1 = generate_polynomial(degree);
        auto poly2 = generate_polynomial(degree);
        auto result = std::vector<int>(2 * degree + 1);
        auto expected = std::vector<int>(2 * degree + 1);

        // serial code on CPU for testing
        naive_polynomial_mul_cpu(poly1.data(), poly2.data(), expected.data(), degree);
        // polynomial CUDA kernel
        polynomial_mul(poly1.data(), poly2.data(), result.data(), degree, block_size, PolynomialMulMethod::fast);

        if (result != expected) {
            std::cerr << "[FAIL] Test failed for degree " << degree
                << "\nPolynomial 1: ";
            for (auto const coeff : poly1) std::cerr << coeff << " ";
            std::cerr << "\nPolynomial 2: ";
            for (auto const coeff : poly2) std::cerr << coeff << " ";
            std::cerr << "\nExpected: ";
            for (auto const coeff : expected) std::cerr << coeff << " ";
            std::cerr << "\nGot: ";
            for (auto const coeff : result) std::cerr << coeff << " ";
            std::cerr << '\n';
            return;
        }

        std::cout << "[PASS] Test passed for degree " << degree << "\n";
    }
    std::cout << "\nPASSED ALL TESTS\n";
}

void test_naive_performance(int degree) {
    const int numCoefficients = 2 * degree + 1;

    // Define polynomials
    int poly1[numCoefficients];
    int poly2[numCoefficients];
    std::fill(poly1, poly1 + numCoefficients, 1.0f);
    std::fill(poly2, poly2 + numCoefficients, 1.0f);
    int result[numCoefficients];

    // use std::chrono to measure time it takes to run naive_polynomial_mul
    auto start = std::chrono::high_resolution_clock::now();
    naive_polynomial_mul_cpu(poly1, poly2, result, degree);
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = end - start;
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed);

    // print degree, block size, and elapsed time
    std::cout << "[cpu] degree: " << degree
        << ", time: " << elapsed_ms.count() << " ms\n";

}

void test_performance(
    int degree, 
    int block_size,
    PolynomialMulMethod method = PolynomialMulMethod::fast)
{
    const int numCoefficients = 2 * degree + 1;

    // Define polynomials
    int poly1[numCoefficients];
    int poly2[numCoefficients];
    std::fill(poly1, poly1 + numCoefficients, 1.0f);
    std::fill(poly2, poly2 + numCoefficients, 1.0f);
    int result[numCoefficients];

    // Create CUDA events for profiling
    cudaEvent_t start, stop;
    cudaEventCreate(&start);
    cudaEventCreate(&stop);

    // Perform polynomial multiplication using the given method
    cudaEventRecord(start); // Record start time
    polynomial_mul(poly1, poly2, result, degree, block_size, method);
    cudaEventRecord(stop); // Record stop time

    // Synchronize to make sure all CUDA operations are completed
    cudaDeviceSynchronize();

    // Calculate elapsed time
    float milliseconds = 0;
    cudaEventElapsedTime(&milliseconds, start, stop);

    // Print result
    std::string method_name;
    switch (method) {
        case PolynomialMulMethod::naive:
            method_name = "naive";
            break;
        case PolynomialMulMethod::fast:
            method_name = "fast!";
            break;
    }

    // print method name, degree, block size, and elapsed time
    std::cout << "[cuda (" << method_name << ")] degree: " << degree
        << ", block size: " << block_size
        << ", time: " << milliseconds << " ms\n";

    // Cleanup
    cudaEventDestroy(start);
    cudaEventDestroy(stop);

}


int main() {
    test_correctness();

    for (int i = 1; i <= 16; i++) {
        test_naive_performance(1 << i);
    }

    for (int b = 32; b <= 512; b *= 2) {
        for (int i = 1; i <= 16; i++) {
            test_performance(1 << i, b, PolynomialMulMethod::naive);
            test_performance(1 << i, b, PolynomialMulMethod::fast);
        }
    }
    return 0;
}
