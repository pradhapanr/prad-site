#ifndef SQUARE_MATRIX_HPP
#define SQUARE_MATRIX_HPP

#include <vector>
#include <cstddef>

class SquareMatrixView;

class SquareMatrix
{
public:
    SquareMatrix(size_t n);
    SquareMatrix(std::vector<std::vector<double>> const &data);
    SquareMatrix(std::vector<std::vector<double>> &&data);
    SquareMatrix(std::initializer_list<std::initializer_list<double>> data);
    
    auto at(size_t i, size_t j) -> double &;
    auto at(size_t i, size_t j) const -> double const &;
    auto write_submat(size_t i, size_t j, SquareMatrixView const &submat) -> void;

    auto parallel_negate(size_t multithread_threshold = 2) const -> SquareMatrix;
    auto parallel_multiply(SquareMatrixView const &rhs, size_t multithread_threshold = 2) const
        -> SquareMatrix;
    auto parallel_add(SquareMatrix const &rhs, size_t multithread_threshold = 2) const
        -> SquareMatrix;

    auto view() const -> SquareMatrixView;
    operator SquareMatrixView();
    operator SquareMatrixView() const;

private:
    std::vector<std::vector<double>> data;
};

#endif // SQUARE_MATRIX_HPP
