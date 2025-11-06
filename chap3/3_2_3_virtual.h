class Container
{
public:
    virtual double& operator[](int) = 0;
    virtual int size() = 0;
    virtual ~Container() {};
};

class List_container : public Container 
{
public:
    List_container() 
    { }
    List_container(std::initializer_list<double> il) : ld {il} 
    { }
    ~List_container()
    { }

    double& List_container::operator[](int index)
    { }
private:
    std::list<double> ld;
};
