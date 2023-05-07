int& function()
{
    int value = 0;
    return value; // ローカル変数への参照を関数が返しており、main()関数で参照を受け取った段階では破棄されてしまっている。
}

int main()
{
    int& value = function();
    value = 10;
}

class A
{
    int m_value;

    public:
        int& value()
        {
            return m_value;
        }

        const int& value() const
        {
            return m_value;
        }
}; 
