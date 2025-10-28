#include <vector>
#include <iostream>
// パラメータ化
// template <typename T>

// 関数テンプレート
template <typename Container, typename Value>
Value sum(const Container& c, Value v)
{
    for (const auto& x:c)
    {
        v += x;
    }
    return v;
}

int main()
{
    std::vector v {1,2,3,4,5,6,7,8,9};
    std::cout << sum(v, 0) << "\n";
}