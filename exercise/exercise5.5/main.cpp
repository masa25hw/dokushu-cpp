#include <iostream>
#include <initializer_list>

class A
{
    public:
        explicit A(std::initializer_list<int> list)
        {
            for (int e : list)
            {
                std::cout << e << std::endl;
            }
        }
};


int main()
{
    A a{0,1,2,3,4};
}

