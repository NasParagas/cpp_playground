
int main()
{
    const int ci = 17;
    int i = 17;
    constexpr double ced1 = 1.4 * ci;  // ok
    // constexpr double ced2 = 1.4 * i;  // コンパイルエラー
}