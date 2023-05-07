#include <iostream>

class A
{
    public:
        A()
        {
            std::cout << "A::A()" << std::endl;
        }
        explicit A(int i)
        {
            std::cout << "A::A(" << i << ")" << std::endl;
        }
        explicit A(int i, int j)
        {
            std::cout << "A::A(" << i << ", " << j <<  ")" << std::endl;
        }
        ~A()
        {
            std::cout << "Destructor" << std::endl;
        }
};


int main()
{
    A* ptr = new A{};
    delete ptr;

    ptr = new A{42};
    delete ptr;

    ptr = new A{3, 10};
    delete ptr;

    A* array = new A[3]
    {
        A{42},
        A{3, 10},
    };

    delete [] array;
}

