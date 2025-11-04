class Vector
{
public:
    Vector(int num_elements);
    double& operator[](int i);
    int size();
private:
    double* element;  // 配列要素へのポインタ
    int num_elements;
};