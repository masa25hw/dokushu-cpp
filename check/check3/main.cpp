#include <iostream>

class A {

    public:
        A(); // 引数を受け取らないデフォルトコンストラクターはコンパイラが暗黙的に定義するが、なにか1つでもコンストラクタを定義することでコンパイラによる自動生成がされなくなってしまうため、引数がない変数宣言がエラーとなる。
        A(const A& other);
};

A::A()
{
}

A::A(const A& other)
{
}

int main()
{
    A a; // Error
}
