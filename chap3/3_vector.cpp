#include "3_vector.h"
#include <stdexcept>
#include <initializer_list>
#include <iostream>

Vector::Vector()
       :element {new double[0]}, num_elements{0}
{ }

Vector::Vector(int num_elements)
       :element {new double[num_elements]}, num_elements{num_elements}
{
    for (int i = 0; i != num_elements; ++i)
    {
        element[i] = i;
    }
}

Vector::Vector(std::initializer_list<double> init_list) { }

Vector::~Vector() { delete[] element; }

double& Vector::operator[](int index)
{
    return element[index];
}

void Vector::print_all_elements() const
{
    for (int i = 0; i != num_elements; ++i)
    {
        std::cout << element[i] << " \n";
    }
}

int Vector::size() const
{
    return num_elements;
}