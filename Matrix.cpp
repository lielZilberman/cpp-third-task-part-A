#include "Matrix.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

// ostream& operator<<(ostream& stream, Matrix mat){
//     return stream;
// }

// istream& operator>>(istream& stream, Matrix mat){
//     return stream;
// }
namespace zich{

Matrix::Matrix(){
    cout <<"hel"<<endl;
}


Matrix matty = Matrix();

Matrix Matrix::operator+(const Matrix& mat){
    return matty;
}

Matrix::Matrix(vector<double> mat, int rows, int colls){

}

Matrix Matrix::operator-(){
    return matty;
}

Matrix Matrix::operator+=(double i){
    return matty;
}

Matrix Matrix::operator-=(const Matrix& mat){
    return mat;
}

Matrix Matrix::operator*=(double i){
    return matty;
}

Matrix Matrix::operator++(){
    return matty;
}

Matrix Matrix::operator--(){
    return matty;
}
Matrix Matrix::operator*(const Matrix& mat){
    return mat;
}
Matrix Matrix::operator-(const Matrix& mat){
    return mat;
}

Matrix Matrix::operator+(){
    return matty;
}

bool Matrix::operator==(const Matrix& mat1){
    return 1;
}
bool Matrix::operator!=(const Matrix& mat1){
    return 1;
}
bool Matrix::operator<=(const Matrix& mat1){
    return 1;
}
bool Matrix::operator>=(const Matrix& mat1){
    return 1;
}
bool Matrix::operator<(const Matrix& mat1){
    return 1;
}
bool Matrix::operator>(const Matrix& mat1){
    return 1;
}

Matrix Matrix::operator++(int i){
    return matty;
}

Matrix Matrix::operator--(int i){
    return matty;
}

ostream& operator<<(ostream& stream, const Matrix& mat){
    return stream;
}
istream& operator>>(istream& stream, const Matrix& mat){
    return stream;
}

Matrix operator*(int i, const Matrix& mat){
    return mat;
}
}