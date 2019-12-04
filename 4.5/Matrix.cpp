#include "Matrix.h"

Matrix::Matrix()
{

}

Matrix::~Matrix()
{
}

const Matrix& Matrix::operator+(const Matrix& that)
{
    Matrix A;
    for(int row = 0 ; row <= n_row - 1; ++row )
    {
        for(int cloumn = 0 ; cloumn<=n_cloumn - 1; ++cloumn)
        {
            A._matrix[row][cloumn] = 
            this->_matrix[row][cloumn] +that._matrix[row][cloumn];
        }
    }
    return A;
}

const Matrix& Matrix::operator+=(const Matrix &that)
{
    *this = *this + that;
    return *this;
}

float&  Matrix::operator() (int row , int cloumn)
{

}


void Matrix::print()
{
}