#include <iostream>

class A
{
    int v;

    public:
        void set(int value);
        int& get();
        const int& get() const;
};

void A::set(int value)
{
    v = value;
}

/*
インスタンス自体がconst、もしくはconst参照を経由して面bナーkン数にアクセスするには
constメンバー関数となっている必要があります。
 */
const int& A::get() const
{
    return v;
}

int& A::get()
{
    return v;
}

int main()
{
    A a;
    a.set(42);
    std::cout << a.get() << std::endl;

    const A& ca = a;
    std::cout << ca.get() << std::endl;
}

/*
Output map file

Command:
    $ g++ -Wl,-Map,$(pwd)//map.txt main.cpp
 */
