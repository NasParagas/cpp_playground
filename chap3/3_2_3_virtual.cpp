#include "3_2_3_virtual.h"
#include <list>
#include <initializer_list>

List_container::List_container() 
{ }
List_container::List_container(std::initializer_list<double> il) : ld {il} 
{ }
List_container::~List_container()
{ }

double& List_container::operator[](int index)
{
    for (auto& x : ld)
    {
        if (index == 0)
        {
            return x;
        }
        --index;
    }
}

