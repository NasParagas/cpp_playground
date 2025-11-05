class Vector
{
public:
    Vector(int num_elements);
    const double& operator[](int index) const;
    int size() const;
private:
    double* element;  // 配列要素へのポインタ
    int num_elements;
};