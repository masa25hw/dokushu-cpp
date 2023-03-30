#include <iostream>

void show_value(int a)
{
    std::cout << a << std::endl;
}

// 3つの整数を受け取ってすべての和を返す関数sum()のオーバーロード
int sum(int a, int b, int c)
{
    return a + b + c;
}

// 2つの整数を受け取ってそれらの和を返す関数sum()
int sum(int a, int b)
{
    return sum(a, b, 0); // 3引数版のオーバーロードを呼び出す
}

// Question1
int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}

// Question2
struct vector2d
{
    float x;
    float y;
};

int sub(int a, int b)
{
    return a - b;
}

vector2d sub(vector2d a, vector2d b)
{
    vector2d r =
    {
        a.x - b.x,
        a.y - b.y,
    };
    return r;
}

int main()
{
    int x = sum(10, 20); // 2引数版のオーバーロードを呼び出す
    show_value(x);

    int y = sum(5, 15, 25); // 3引数版のオーバーロードを呼び出す
    show_value(y);

    // Question1
    int z = sum(5, 15, 25, 35); // 3引数版のオーバーロードを呼び出す
    show_value(z);

    // Question2
    std::cout << sub(10,20) << std::endl;

    vector2d a = {-10, 30};
    vector2d b = {5, 10};
    auto v = sub(a, b);
    std::cout << v.x << ", " << v.y << std::endl;
}
