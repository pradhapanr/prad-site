#include "SquareMatrix.hpp"
#include "SquareMatrixView.hpp"

auto lower_triangular_inverse(SquareMatrixView const &matrix, size_t multithread_threshold = 2)
    -> SquareMatrix {
    auto const n = matrix.size();
    if (n <= multithread_threshold) {
        return matrix.inverse_forward_substitution();
    }

    auto const A1_inv = lower_triangular_inverse(
        matrix.submat(0, 0, n/2), multithread_threshold);
    auto const A2 = matrix.submat(n/2, 0, n/2);
    auto const A3_inv = lower_triangular_inverse(
        matrix.submat(n/2, n/2, n/2), multithread_threshold);
    auto const prod = A3_inv
        .parallel_negate(multithread_threshold)
        .parallel_multiply(A2, multithread_threshold)
        .parallel_multiply(A1_inv, multithread_threshold);
    // auto const prod = -A3_inv * A2 * A1_inv;
    auto result = SquareMatrix {n};
    result.write_submat(0, 0, A1_inv);
    result.write_submat(n/2, n/2, A3_inv);
    result.write_submat(n/2, 0, prod);
    return result;
}