#ifndef SQUARE_MATRIX_VIEW_HPP
#define SQUARE_MATRIX_VIEW_HPP

#include <cstddef>
#include <iostream>

class SquareMatrix;

class SquareMatrixView {
public:
    SquareMatrixView(SquareMatrix &matrix, size_t i, size_t j, size_t n);

    auto at(size_t i, size_t j) -> double &;
    auto at(size_t i, size_t j) const -> double const &;
    auto size() const -> size_t;
    auto inverse_forward_substitution() const -> SquareMatrix;
    auto submat(size_t row, size_t col, size_t n) const -> SquareMatrixView;

    auto parallel_add(SquareMatrixView const &rhs, size_t multithread_threshold = 2) const
        -> SquareMatrix;
    auto parallel_multiply(SquareMatrixView const &rhs, size_t multithread_threshold = 2) const
        -> SquareMatrix;
    auto parallel_negate(size_t multithread_threshold = 2) const -> SquareMatrix;

private:
    SquareMatrix &matrix;
    size_t row_offset, col_offset, order;
};

auto operator+(SquareMatrixView const &lhs, SquareMatrixView const &rhs) -> SquareMatrix;
auto operator*(SquareMatrixView const &lhs, SquareMatrixView const &rhs) -> SquareMatrix;
auto operator-(SquareMatrixView const &unary) -> SquareMatrix;
auto operator<<(std::ostream &os, SquareMatrixView const &m) -> std::ostream &;

#endif // SQUARE_MATRIX_VIEW_HPP
