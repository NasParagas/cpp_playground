#include "2_4_1_vector.h"
#include <stdexcept>

Vector::Vector(int num_elements)
       :element {new double[num_elements]}, num_elements{num_elements}
{
    for (int i = 0; i != num_elements; ++i)
    {
        element[i] = i;
    }
}

const double& Vector::operator[](int index) const
{
    return element[index];
}

int Vector::size() const
{
    return num_elements;
}