#ifndef  MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Matrix
{
private:
    static const int n_row = 4;
    static const int n_cloumn = 4 ;
    int _row;
    int _column;
    float _matrix[n_row-1][n_cloumn-1];
public:
    // default constructor
    Matrix(/* args */);
    // constructor
    Matrix( float matrix[3][3]);
    ~Matrix();
    // 
    int  row ( ) { return _row;}
    // 
    int cloumn (){ return _column;}
    // + 
    const Matrix&  operator+ ( const Matrix& that);
    // *
    const Matrix&  operator*(const Matrix &that);
    // +=
    const Matrix&  operator+=(const Matrix& that);
    // print
    void print();
    // 
    float& operator() (int row , int cloumn);
    // 
    float operator() (int row ,int cloumn) const;


};




























#endif // ! MATRIX_H