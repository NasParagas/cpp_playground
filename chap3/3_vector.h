#include <initializer_list>

class Vector
{
public:
    Vector(int num_elements);
    template <class T>
    Vector(std::initializer_list<T> init_list);
    const double& operator[](int index) const;
    int size() const;
    ~Vector();
private:
    double* element;  // 配列要素へのポインタ
    int num_elements;
};