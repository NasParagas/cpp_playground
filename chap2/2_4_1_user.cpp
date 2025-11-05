#include "2_4_1_vector.h"
#include <cmath>
#include <iostream>

double sqrt_sum(const Vector& vec)
{
    double sum = 0;
    for (int i = 0; i != vec.size(); ++i)
    {
        sum += sqrt(vec[i]);
    }
    return sum;
}

int main()
{
    const Vector vec(10);
    std::cout << vec[11] << std::endl;
    std::cout << sqrt_sum(vec) << std::endl;
}
