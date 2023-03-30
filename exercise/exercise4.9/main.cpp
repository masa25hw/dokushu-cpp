#include <iostream>

void original()
{
    std::cout << "original()" << std::endl;
}

void injected()
{
    std::cout << "injected()" << std::endl;
}

int main()
{
    #define original injected
    original();
    #undef original
    original();
}
