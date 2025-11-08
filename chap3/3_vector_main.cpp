#include "3_vector.h"
#include "iostream"

int main()
{
    Vector v1(3);
    Vector v2;
    v2 = v1;
    Vector v3 {v1};
    std::cout << &v1[0] << "\n";
    std::cout << &v2[0] << "\n";
    std::cout << &v3[0] << "\n";
    std::cout << &v1[1] << "\n";
    std::cout << &v2[1] << "\n";
    std::cout << &v3[1] << "\n";
}