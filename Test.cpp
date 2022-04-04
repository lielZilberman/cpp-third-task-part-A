// Test by: Liel Zilberman

#include "Matrix.hpp"
#include "doctest.h"

using namespace std;
using namespace zich;


vector<double> vec1 = {2,2,2,2};
vector<double> vec2 = {0,1,0,1};
vector<double> vec3 = {2,3,2,3};
Matrix mat1(vec1, 2,2);
Matrix mat2(vec2, 2,2);
Matrix mat3(vec3,2,2);
vector<double> vec4 = {3,1,3,2,1,1};
vector<double> vec5 = {1.2, 0.3, 2.2, 5, 2.31, 0};
vector<double> vec6 = {(43/5), (321/100), (33/5), (68/5), (138/25), (33/5), (31/5), (261/100), (11/5)};
vector<double> vec7 = {0,0,0,0,0,0};
Matrix mat4(vec4, 3, 2);
Matrix mat5(vec5, 2, 3);
Matrix mat6(vec6, 3, 3);
Matrix mat7(vec7, 3, 3);

TEST_CASE("should be working"){
    CHECK((mat1 != mat2));
    CHECK((mat1 + mat2 == mat3));
    CHECK((mat1 < mat3));
    CHECK((mat1 * mat2 == mat2));
    CHECK((mat3 - mat2 == mat1));
    CHECK((mat1 >= mat2));
    CHECK((mat4 * mat5 == mat6));
    CHECK(((+mat6) == mat6));
    CHECK(((-mat4) != mat4));
    CHECK((mat6 * mat7 == mat7));
    CHECK(((-mat7) == mat7));
}

TEST_CASE("should not be working"){
    CHECK_THROWS(mat1 * mat4);
    CHECK_THROWS(mat2 + mat5);
    CHECK_THROWS(mat3 * mat7);
    CHECK_THROWS(mat7 - mat5);
    CHECK_THROWS((mat6 * mat5) + mat7);
    CHECK_THROWS(mat2 - mat7);
    CHECK_THROWS((mat1 + mat2) - mat6);
    CHECK_THROWS((mat3 * mat5) + mat2);
    CHECK_THROWS((+mat5) + (-mat4));
    CHECK_THROWS(mat1 * mat6);
}