#include <iostream>

void message()
{
    std::cout << "Hello, function pointer" << std::endl;
}

int main()
{
    void (*fp)() = message;
    fp();
}

/*
高階関数とは、関数ポインタや関数リファレンスを引数で受け取るか、
戻り値として返す関数のことです。
処理の内容を関数によってカスタマイズすることができます。
 */
