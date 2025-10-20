#include <iostream>

struct Vector
{
    int num_elements;
    double* element;
};

void vector_init(Vector& vector, int num_elements)
{
    vector.element = new double[num_elements];
    vector.num_elements = num_elements;
}

double read_and_sum(int num_elements)
{
    Vector vector;
    vector_init(vector, num_elements);
    for (int i=0; i!=num_elements; ++i)
    {
        std::cin >> vector.element[i];
    }

    double sum = 0;
    for (int i=0; i!=num_elements; ++i)
    {
        sum += vector.element[i];
    }
    return sum;
}

int main() {
    std::cout << "please input numbers you want to add\n";
    auto sum = read_and_sum(5);
    std::cout << "sum: " << sum << "\n";
}