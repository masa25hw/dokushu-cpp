#include <iostream>

int main()
{
    int value[] = { -20, 10, 5, -40, 0, 10, -30 };

    for (int elem : value) // ΝΝforΆπgΑΔΈ
    {
        if (elem < 0)
        {
            std::cout << "continue" << std::endl;
            continue;
        }
        if (elem == 0)
        {
            std::cout << "break" << std::endl;
            break;
        }

        std::cout << "elem = " << elem << std::endl;
    }

    std::cout << "[vΜIΉ" << std::endl;
}