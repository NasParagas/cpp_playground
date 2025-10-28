class Vector {
 public:
    Vector(int num_element) :element{new double[num_element]}, num_element{num_element} {}
    double& operator[](int s) {
        return element[s];
    }
    int size() {
        return num_element;
    }

 private:
    double* element;
    int num_element;
};

int main() {
    Vector vector(10);
}