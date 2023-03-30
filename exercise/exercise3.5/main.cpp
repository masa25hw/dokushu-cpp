#include <iostream>
#include <string>

class Base
{
    public:
        virtual std::string name() const;
        // Question3
        virtual std::string most_name() const = 0;

};

std::string Base::name() const { return "Base"; }

class Derived : public Base
{
    public:
        std::string name() const override;
};

std::string Derived::name() const { return "Derived"; }

// Question2
class MoreDerived : public Derived
{
    public:
        std::string name() const override;
        // Question3
        std::string most_name() const override;
};

std::string MoreDerived::name() const { return "MoreDerived"; }
std::string MoreDerived::most_name() const { return "MoreDerived most name"; }

int main()
{
    // Derived d; // エラー。抽象クラスのインスタンスを作ることができない。
    MoreDerived d;
    std::cout << d.most_name() << std::endl;
}
