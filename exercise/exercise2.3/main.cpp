#include <iostream>

void question1(void);
void question2(void);

int main()
{
    question1();

    question2();
}

void question1(void)
{
     int i = 0;

    int& j = i;
    j = 42;

    std::cout << i << std::endl;
}

void question2(void)
{
    const int i = 42;

    const int& r = i;
    std::cout << i << std::endl;
}
 