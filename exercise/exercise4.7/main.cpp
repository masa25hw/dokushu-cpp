#include <iostream>

namespace module
{
    void method()
    {
        std::cout << "module::method()" << std::endl;
    }
}

void method()
{
    std::cout << "method()" << std::endl;
}

int main()
{
    using module::method;
    // module::method();
    method();
    ::method();
}
