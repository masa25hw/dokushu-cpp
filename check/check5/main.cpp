#include <iostream>
#include <utility>

// Check1
int* allocate(int n)
{
    return new int[n]{};
    //全ての要素を0で初期化したい場合は、初期化リストの中身をすべて省略するだけで実現可能。（初期化リスト事態を省略してはいけない）
}

// Check2
void clear(int& variable)
{
    variable = 0;
}

// Check3
// 参照を受け取る関数と、右辺値参照を受け取る関数をオーバーロードし、それらを呼び分けてください。
void show_ck3(int& value)
{
    std::cout << "参照" << std::endl;
}

void show_ck3(int&& value)
{
    std::cout << "右辺値参照" << std::endl;
}

// Check4
void show(int v)
{
    std::cout << v << std::endl;
}

void enumerate(int* first, int* last, void(*func)(int))
{
    for ( ; first != last; ++first)
    {
        func(*first);
    }
}

int main()
{
    // Check3
    int i = 0;
    show_ck3(i); // 参照
    show_ck3(std::move(i)); // 右辺値参照

    // Check4
    int array[] = {1, 2, 3, 5, 7, 11, 13};

    std::size_t length = sizeof(array) / sizeof(array[0]);
    enumerate(array, array + length, show);

    // Check5
    // Lambda expression
    std::cout << std::endl;
    std::cout << "Lambda expression" << std::endl;
    // キャプチャを持たないラムダ式は関数ポインタへ暗黙変換できるので、実引数として直接渡すことができる。
    enumerate(array, array + length, [](int v)
    {
        std::cout << v << std::endl;
    });
}
