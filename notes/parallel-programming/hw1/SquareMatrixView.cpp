#include <iostream>
#include <iomanip>
#include <cilk/cilk.h>

#include "SquareMatrixView.hpp"
#include "SquareMatrix.hpp"

SquareMatrixView::SquareMatrixView(SquareMatrix &matrix, size_t i, size_t j, size_t n)
    : matrix {matrix},
      row_offset {i},
      col_offset {j},
      order {n}
{}

auto SquareMatrixView::at(size_t i, size_t j) -> double & {
    return matrix.at(i + row_offset, j + col_offset);
}

auto SquareMatrixView::at(size_t i, size_t j) const -> double const & {
    return matrix.at(i + row_offset, j + col_offset);
}

auto SquareMatrixView::size() const -> size_t {
    return order;
}

auto SquareMatrixView::inverse_forward_substitution() const -> SquareMatrix {
    auto result = SquareMatrix {order};
    for (size_t i = 0; i < order; ++i) {
        result.at(i, i) = 1 / at(i, i);
        for (size_t j = i + 1; j < order; ++j) {
            double sum = 0;
            for (size_t k = i; k < j; ++k) {
                sum -= at(j, k) * result.at(k, i);
            }
            result.at(j, i) = sum / at(j, j);
        }
    }
    return result;
}

auto SquareMatrixView::submat(size_t row, size_t col, size_t n) const -> SquareMatrixView {
    return SquareMatrixView {matrix, row + row_offset, col + col_offset, n};
}

auto SquareMatrixView::parallel_add(
    SquareMatrixView const &rhs,
    size_t multithread_threshold) const -> SquareMatrix {
    // divide and conquer matrix addition
    if (order <= multithread_threshold) {
        return submat(0, 0, order) + rhs.submat(0, 0, order);
    } else {
        auto result = SquareMatrix {order};
        
        auto const half = order / 2;
        auto const a11 = submat(0, 0, half);
        auto const a12 = submat(0, half, half);
        auto const a21 = submat(half, 0, half);
        auto const a22 = submat(half, half, half);
        auto const b11 = rhs.submat(0, 0, half);
        auto const b12 = rhs.submat(0, half, half);
        auto const b21 = rhs.submat(half, 0, half);
        auto const b22 = rhs.submat(half, half, half);
        cilk_spawn {
            auto const c11 = a11.parallel_add(b11);
            result.write_submat(0, 0, c11);
        }
        cilk_spawn {
            auto const c12 = a12.parallel_add(b12);
            result.write_submat(0, half, c12);
        }
        cilk_spawn {
            auto const c21 = a21.parallel_add(b21);
            result.write_submat(half, 0, c21);
        }
        cilk_spawn {
            auto const c22 = a22.parallel_add(b22);
            result.write_submat(half, half, c22);
        }
        cilk_sync;
        return result;
    }
}

auto SquareMatrixView::parallel_multiply(
    SquareMatrixView const &rhs,
    size_t multithread_threshold) const -> SquareMatrix {
    // divide and conquer matrix multiplication
    if (order <= multithread_threshold) {
        return submat(0, 0, order) * rhs.submat(0, 0, order);
    } else {
        auto result = SquareMatrix {order};
        auto const half = order / 2;
        auto const a11 = submat(0, 0, half);
        auto const a12 = submat(0, half, half);
        auto const a21 = submat(half, 0, half);
        auto const a22 = submat(half, half, half);
        auto const b11 = rhs.submat(0, 0, half);
        auto const b12 = rhs.submat(0, half, half);
        auto const b21 = rhs.submat(half, 0, half);
        auto const b22 = rhs.submat(half, half, half);

        auto const c11l = cilk_spawn a11.parallel_multiply(b11);
        auto const c11r = cilk_spawn a12.parallel_multiply(b21);

        auto const c12l = cilk_spawn a11.parallel_multiply(b12);
        auto const c12r = cilk_spawn a12.parallel_multiply(b22);

        auto const c21l = cilk_spawn a21.parallel_multiply(b11);
        auto const c21r = cilk_spawn a22.parallel_multiply(b21);

        auto const c22l = cilk_spawn a21.parallel_multiply(b12);
        auto const c22r = cilk_spawn a22.parallel_multiply(b22);
        cilk_sync;

        cilk_spawn {
            auto const c11 = c11l.parallel_add(c11r);
            result.write_submat(0, 0, c11);
        }
        cilk_spawn {
            auto const c12 = c12l.parallel_add(c12r);
            result.write_submat(0, half, c12);
        }
        cilk_spawn {
            auto const c21 = c21l.parallel_add(c21r);
            result.write_submat(half, 0, c21);
        }
        cilk_spawn {
            auto const c22 = c22l.parallel_add(c22r);
            result.write_submat(half, half, c22);
        }
        cilk_sync;
        return result;
    }
}

auto SquareMatrixView::parallel_negate(size_t multithread_threshold) const -> SquareMatrix {
    // divide and conquer matrix negation
    if (order <= multithread_threshold) {
        return -submat(0, 0, order);
    } else {
        auto result = SquareMatrix {order};
        auto const half = order / 2;
        auto const a11 = submat(0, 0, half);
        auto const a12 = submat(0, half, half);
        auto const a21 = submat(half, 0, half);
        auto const a22 = submat(half, half, half);
        auto const c11 = a11.parallel_negate();
        auto const c12 = a12.parallel_negate();
        auto const c21 = a21.parallel_negate();
        auto const c22 = a22.parallel_negate();
        result.write_submat(0, 0, c11);
        result.write_submat(0, half, c12);
        result.write_submat(half, 0, c21);
        result.write_submat(half, half, c22);
        return result;
    }
}

auto operator+(SquareMatrixView const &lhs, SquareMatrixView const &rhs) -> SquareMatrix {
    auto result = SquareMatrix {lhs.size()};
    for (size_t i = 0; i < lhs.size(); ++i) {
        for (size_t j = 0; j < lhs.size(); ++j) {
            result.at(i, j) = lhs.at(i, j) + rhs.at(i, j);
        }
    }
    return result;
}

auto operator*(SquareMatrixView const &lhs, SquareMatrixView const &rhs) -> SquareMatrix {
    auto result = SquareMatrix {lhs.size()};
    for (size_t i = 0; i < lhs.size(); ++i) {
        for (size_t j = 0; j < lhs.size(); ++j) {
            double sum = 0;
            for (size_t k = 0; k < lhs.size(); ++k) {
                sum += lhs.at(i, k) * rhs.at(k, j);
            }
            result.at(i, j) = sum;
        }
    }
    return result;
}

auto operator-(SquareMatrixView const &unary) -> SquareMatrix {
    auto result = SquareMatrix {unary.size()};
    for (size_t i = 0; i < unary.size(); ++i) {
        for (size_t j = 0; j < unary.size(); ++j) {
            result.at(i, j) = -unary.at(i, j);
        }
    }
    return result;
}

auto operator<<(std::ostream &os, SquareMatrixView const &m) -> std::ostream & {
    for (size_t i = 0; i < m.size(); ++i) {
        for (size_t j = 0; j < m.size(); ++j) {
            os << std::fixed << std::setw(10) << std::setprecision(20) << m.at(i, j);
        }
        os << std::endl;
    }
    return os;
}