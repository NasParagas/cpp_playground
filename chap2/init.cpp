#include <iostream>

int main()
{
    std::cout << "hello2\n";

    int i1 = 7.1;
    std::cout << i1 << "\n";

    int i2 {7};
    std::cout << i2 << "\n";

    // int i2 {7.1};  // コンパイルエラー

}