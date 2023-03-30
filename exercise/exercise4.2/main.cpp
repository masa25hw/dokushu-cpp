#include <iostream>

int sum(int lhs, int rhs);
class A
{
    int m_v;

public:
    explicit A(int v)
     : m_v(v)
     {
     }; // explicitキーワードを追加することで
                     // 暗黙のコンストラクター呼び出しを禁止できる

    int v() const
    {
        return m_v;
    }
};


int main()
{
    sum(10, 5);
    // A x = 0; // エラー。暗黙のコンストラクター呼び出しは禁止されている

    A y(42); // OK。明示的なコンストラクター呼び出し

    y.v() == 42; // true
}

int sum(int lhs, int rhs)
{
    int sum = lhs + rhs;
    std::cout<< sum << std::endl;
    return sum;
}
