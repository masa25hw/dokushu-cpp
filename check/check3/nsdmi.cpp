#include <iostream>

class vector3d {

    float x = 0;
    float y = 0;
    float z = 0;

    public:
        vector3d();
        vector3d(float x, float y);
        vector3d(float x, float y, float z);
        void show();
};

vector3d::vector3d()
{
    show();
}

vector3d::vector3d(float x, float y)
  : x(x), y(y)
{
    show();
}0-

vector3d::vector3d(float x, float y, float z)
  : x(x), y(y), z(z)
{
    show();
}

void vector3d::show()
{
    std::cout << x << ", " << y << ", " << z << std::endl;
}

int main()
{
    vector3d v0;
    vector3d v2(1,2);
    vector3d v3(1,2,3);
}
