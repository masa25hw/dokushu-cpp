#include <iostream>

// ��^�e���v���[�g�p�����[�^�[���^���_����
template <auto i>
void show_nttp()
{
    std::cout << "show_nttp<" << i << ">()" << std::endl;
}

int main()
{
    show_nttp<0>();

    show_nttp<42>();
}