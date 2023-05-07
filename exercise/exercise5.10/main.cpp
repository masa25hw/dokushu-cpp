#include <iostream>

class A
{
    int value = 0;

    public:
        void set(int value){ this->value = value; }
        void foo();
};

void A::foo()
{
    // thisポインタをキャプチャしていないとラムダ式はメンバー変数やメンバー関数にアクセスすることができません。
    auto lambda = [this]()
    {
        std::cout << value << std::endl;
    };

    lambda();
}

int main()
{
    A a;
    a.set(42);
    a.foo();
}
