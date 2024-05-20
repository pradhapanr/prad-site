#ifndef POLY_MUL_HPP
#define POLY_MUL_HPP

#include <iostream>
#include <cuda_runtime.h>

/**
 * @brief Helper function for checking CUDA errors.
 */
inline void assert_gpu(cudaError_t result, const char *file, int line) {
    if (result != cudaSuccess) {
        std::cerr << "CUDA error at "
            << file << ":" << line << ": " << cudaGetErrorString(result) << std::endl;
        exit(EXIT_FAILURE);
    }
}

enum class PolynomialMulMethod {
    naive,
    fast
};

/**
 * @brief Naive polynomial multiplication on the CPU.
 */
template <typename T>
void naive_polynomial_mul_cpu(
    T const *poly1,
    T const *poly2,
    T       *result, 
    int   const  degree
) {
    for (int i = 0; i <= 2 * degree; i++) {
        T sum = 0;
        for (int j = 0; j <= i; j++) {
            if (j <= degree && (i - j) <= degree) {
                sum += poly1[j] * poly2[i - j];
            }
        }
        result[i] = sum;
    }
}

/**
 * @brief Naive polynomial multiplication kernel.
 * 
 * @param poly1 First polynomial
 * @param poly2 Second polynomial
 * @param result Resultant polynomial
 * @param degree Degree of the polynomial
 */
template <typename T>
__global__ void naive_polynomial_mul_dev(
    T const *poly1,
    T const *poly2,
    T       *result, 
    int   const  degree
) {
    int const tid = blockIdx.x * blockDim.x + threadIdx.x;

    if (tid < (2 * degree + 1)) {
        int const i = tid;
        T sum = 0;
        for (int j = 0; j <= i; j++) {
            if (j <= degree && (i - j) <= degree) {
                sum += poly1[j] * poly2[i - j];
            }
        }
        result[i] = sum;
    }
}

/**
 * @brief Fast polynomial multiplication kernel.
 * 
 * @param poly1 First polynomial
 * @param poly2 Second polynomial
 * @param result Resultant polynomial
 * @param degree Degree of the polynomial
 *
 */
template <typename T>
__global__ void fast_polynomial_mul_dev(
    T const *A,
    T const *B,
    T       *C, 
    int   const  degree
) {
    int const n = degree;
    int const b = blockIdx.x;
    int const block_size = blockDim.x;
    int const u = threadIdx.x;
    if (u > min(block_size - 1, 2*n - block_size*b)) return;
    auto const p = b*block_size + u;
    for (auto t = max(0, n - p); t <= min(n, 2*n - p); ++t) {
        C[p] = C[p] + A[t + p - n] * B[n - t];
    }
}

/**
 * @brief Polynomial multiplication.
 * 
 * @param poly1 First polynomial
 * @param poly2 Second polynomial
 * @param result Resultant polynomial
 * @param degree Degree of the polynomial
 * @param method Method to use for polynomial multiplication
 */
template <typename T>
void polynomial_mul(
    T const *const poly1,
    T const *const poly2,
    T *result,
    int const degree,
    int const block_size,
    PolynomialMulMethod method = PolynomialMulMethod::fast
) {
    const int num_coefficients = 2 * degree + 1;

    T *d_poly1, *d_poly2, *d_result;

    // Allocate memory on device
    assert_gpu(
        cudaMalloc((void**)&d_poly1, num_coefficients * sizeof(T)),
        __FILE__, __LINE__);
    assert_gpu(
        cudaMalloc((void**)&d_poly2, num_coefficients * sizeof(T)),
        __FILE__, __LINE__);
    assert_gpu(
        cudaMalloc((void**)&d_result, num_coefficients * sizeof(T)),
        __FILE__, __LINE__);

    // Copy polynomials from host to device
    assert_gpu(
        cudaMemcpy(d_poly1, poly1, num_coefficients * sizeof(T), cudaMemcpyHostToDevice),
        __FILE__, __LINE__);
    assert_gpu(
        cudaMemcpy(d_poly2, poly2, num_coefficients * sizeof(T), cudaMemcpyHostToDevice),
        __FILE__, __LINE__);

    // Launch kernel
    int const num_blocks = (num_coefficients + block_size - 1) / block_size;

    switch (method) {
    case PolynomialMulMethod::naive:
        naive_polynomial_mul_dev<<<num_blocks, block_size>>>(d_poly1, d_poly2, d_result, degree);
        break;
    case PolynomialMulMethod::fast:
        fast_polynomial_mul_dev<<<num_blocks, block_size>>>(d_poly1, d_poly2, d_result, degree);
        break;
    default:
        std::cerr << "Invalid polynomial multiplication method" << std::endl;
        exit(EXIT_FAILURE);
    }

    // Check for errors
    assert_gpu(
        cudaGetLastError(),
        __FILE__, __LINE__);

    // Wait to finish
    assert_gpu(
        cudaDeviceSynchronize(),
        __FILE__, __LINE__);

    // Copy result back to host
    assert_gpu(
        cudaMemcpy(result, d_result, num_coefficients * sizeof(T), cudaMemcpyDeviceToHost),
        __FILE__, __LINE__);

    // Free memory on device
    assert_gpu(cudaFree(d_poly1), __FILE__, __LINE__);
    assert_gpu(cudaFree(d_poly2), __FILE__, __LINE__);
    assert_gpu(cudaFree(d_result), __FILE__, __LINE__);
}

#endif