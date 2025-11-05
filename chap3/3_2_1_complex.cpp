#include <iostream>

class complex
{
    double re, im;

public:
    // コンストラクタ
    complex(double r, double i): re{r}, im{i} {}
    complex(double r): re{r}, im{0} {}
    complex(): re{0}, im{0} {}  // デフォルトコンストラクタ

    // get
    double real() const { return re; }
    double imaginary() const { return im; }

    // set
    void real(double r) { re = r; }
    void imaginary(double i) { im = i; }

    // 算術定義
    complex& operator+=(complex z)
    {
        complex z2;
        re += z.re;
        im += z.im;
        return *this;  // このメンバ関数を実行したオブジェクトを参照する式(this自体はポインタ)
    }
};

int main()
{
    complex z;
    complex z2;
    z.real(10);
    z.imaginary(5);
    z2.real(4);
    z += z2;
    std::cout << z.real() << "\n" << z.imaginary() << std::endl;
}