#include <iostream>

int main()
{
    std::cout << "Do you want to proceed?(y/n)\n";
    char answer = 0;
    std::cin >> answer;
    switch (answer)
    {
    case 'y':
        std::cout << "proceeding";
        return true;
    case 'n':
        std::cout << "aborting";
        return false;
    default:
        std::cout << "oo\n";
        return false;
    }
}