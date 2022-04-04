#include <string>
#include <vector>

namespace zich{
class Matrix{
private:
    int rows;
    int colls;
    std::vector<std::vector<double>> mat;
public:
    Matrix();
    Matrix(std::vector<double> mat, int rows, int colls);
    friend std::ostream& operator<<(std::ostream& stream, const Matrix& mat);
    friend std::istream& operator>>(std::istream& stream, const Matrix& mat);
    Matrix operator+(const Matrix& mat);
    Matrix operator-();
    Matrix operator+=(double i);
    Matrix operator-=(const Matrix& mat);
    Matrix operator*=(double i);
    Matrix operator++();
    Matrix operator--();
    Matrix operator+();
    Matrix operator*(const Matrix& mat);
    Matrix operator- (const Matrix& mat);
    Matrix operator++(int i);
    Matrix operator--(int i);
    friend Matrix operator*(int i, const Matrix& mat);
    bool operator==(const Matrix& mat1);
    bool operator!=(const Matrix& mat1);
    bool operator<=(const Matrix& mat1);
    bool operator>=(const Matrix& mat1);
    bool operator<(const Matrix& mat1);
    bool operator>(const Matrix& mat1);
};
}