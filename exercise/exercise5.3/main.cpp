#include <iostream>

class A
{
    public:
        A()
        {
            std::cout << "Constructor" << std::endl;
        }
        ~A()
        {
            std::cout << "Destructor" << std::endl;
        }
};


int main()
{
    std::cout << "動的確保前" << std::endl;
    A* ptr = new A{};
    std::cout << "動的確保後" << std::endl;
    std::cout << "解放前" << std::endl;
    delete ptr; // コメントアウトするとメモリリークが発発生する
    std::cout << "解放後" << std::endl;
}
