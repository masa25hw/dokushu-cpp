#include <iostream>

class product
{
    int price;

    public:
        product(int price) : price(price) {}
        inline int get_price() const;
        inline void set_price(int);
};

int product::get_price() const { return price; }
void product::set_price(int price) { this->price = price; }

inline int succ(int v)
{
    return v + 1;
}

int main()
{
    product P(42);
    std::cout << P.get_price() << std::endl;
    P.set_price(100);
    std::cout << P.get_price() << std::endl;

}
