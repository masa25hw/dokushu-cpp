#include <iostream>

inline int next(int value)
{
    return value + 1;
}

namespace A::B::C
{
    void show_message()
    {
        std::cout << "text" << std::endl;
    }
}

int main()
{
    namespace ABC = A::B::C;
    ABC::show_message();
}
