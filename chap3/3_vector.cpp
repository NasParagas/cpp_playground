#include "3_vector.h"
#include <stdexcept>
#include <initializer_list>

Vector::Vector(int num_elements)
       :element {new double[num_elements]}, num_elements{num_elements}
{
    for (int i = 0; i != num_elements; ++i)
    {
        element[i] = i;
    }
}

template <class T>
Vector::Vector(std::initializer_list<T> init_list) { }

Vector::~Vector() { delete[] element; }

const double& Vector::operator[](int index) const
{
    return element[index];
}

int Vector::size() const
{
    return num_elements;
}

int main()
{
    Vector v1 = {1,3,4,4};
}