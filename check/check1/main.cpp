#include <iostream>

int main()
{
    std::string str = "Hello, string";

    for (auto c : str){
        std::cout << c << std::endl;
    }
}
