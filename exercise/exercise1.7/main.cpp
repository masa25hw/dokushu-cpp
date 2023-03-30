#include <iostream>

int main()
{
    int array[] = {4, 2, 1, 9, 5};

    // int i = 0;
    int num_array = sizeof(array) / sizeof(array[0]);
    int i = num_array;
    std::cout << "-----while-----" << std::endl;
    while (i--)
    {
        std::cout << array[i] << std::endl;
    }

    std::cout << "----for-----" << std::endl;
    i = num_array;
    for (i;  i--;)
    {
        std::cout << array[i] << std::endl;
    }

    std::cout << "-----do while-----" << std::endl;
    i = num_array;
    do
    {
        std::cout << array[--i] << std::endl;
    } while (i);
}

