#include <initializer_list>

class Vector
{
public:
    // コンストラクタ
    Vector();
    Vector(int num_elements);
    Vector(std::initializer_list<double> init_list);  
    // Vector(const Vector& a);  // コピーコンストラクタ

    // デストラクタ
    ~Vector();

    // 演算子定義
    // Vector& operator=(const Vector& a);  // コピー代入

    double& operator[](int index);
    int size() const;
    void print_all_elements() const;

private:
    double* element;  // 配列要素へのポインタ
    int num_elements;
};