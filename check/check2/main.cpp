#include <iostream>

class vector3d {

    public:
        using element_type = int;

    private:
        element_type x;
        element_type y;
        element_type z;

    public:
        element_type getX();
        element_type getY();
        element_type getZ();
        void setX(element_type X);
        void setY(element_type Y);
        void setZ(element_type Z);

        void set(element_type X, element_type Y, element_type Z);

        element_type volume();
};

vector3d::element_type vector3d::getX()
{
    return x;
}

void vector3d::setX(element_type X)
{
    x = X;
}

vector3d::element_type vector3d::getY()
{
    return y;
}

void vector3d::setY(element_type Y)
{
    y = Y;
}

vector3d::element_type vector3d::getZ()
{
    return z;
}

void vector3d::setZ(element_type Z)
{
    z = Z;
}

void set(vector3d::element_type X, vector3d::element_type Y, vector3d::element_type Z = 0)
{
    vector3d vec;
    vec.setX(X);
    vec.setY(Y);
    vec.setZ(Z);
}

vector3d::element_type vector3d::volume()
{
    return x * y * z;
}

int main()
{
    int x = 0, y = 0, z = 0;

    std::cout << "Type valueX, valueY, valueZ..." << std::endl;
    std::cin >> x >> y >> z;

    vector3d vec;

    vec.setX(x);
    vec.setY(y);
    vec.setZ(z);

    std::cout << "x: " << vec.getX() << ", ";
    std::cout << "y: " << vec.getY() << ", ";
    std::cout << "z: " << vec.getZ() << std::endl;
    std::cout << vec.volume() << std::endl;
}
