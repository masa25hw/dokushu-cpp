#include <iostream>
#include <vector>

class product
{
    int id = 0;
    std::string name = "not available";
    int price = 0;

    public:
        explicit product(int id, std::string name, int price)
          : id(id), name(name), price(price) {}
        product(); // Default constructor
};

product::product()
{
}

int main()
{
    // product p[4] =
    // {
    //     product{1, "smart phone", 60000},
    //     product{2, "tablet", 35000},
    // };

    std::vector<product> p =
    {
        product{1, "smart phone", 60000},
        product{2, "tablet", 35000},
    };
    p.push_back(product{});
    p.push_back(product{});
}
