#include <iostream>
#include <utility>

/* cSpell:disable rrf */
void show(int&& rref)
{
    std::cout << rref << std::endl;
}
/* cSpell:enable rrf */

class A
{
    public:
        // 何かコンストラクタが定義されると
        // デフォルトコンストラクタは自動生成されないので定義する
        A() { }

        A(const A& other)
        {
            std::cout << "コピーコンストラクタ" << std::endl;
        }

        A(A&& other)
        {
            std::cout << "ムーブコンストラクタ" << std::endl;
        }
};

int main()
{
    int i = 42;
    show(std::move(i));

    A a;
    A c(a); // copy constructor
    A m(std::move(a)); // move constructor
}

/* 
右辺値参照
type&& variable = R-value;

通常の参照は左辺値でのみ初期化ができ、右辺値ではできない。
右辺値参照はそのような通常の参照とは少し異なり、右辺値への参照のみを格納できる機能である。
 */
