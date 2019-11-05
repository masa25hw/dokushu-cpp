#include <iostream>

class int_observer_ptr
{
    int* pointer;

public:
    explicit int_observer_ptr(int* pointer)
        : pointer{ pointer } { }

    int& operator*() const; // �ԐڎQ�Ɖ��Z�q
};

// �|�C���^�[�N���X���̂�const�ł����Ă��A
// �|�C���^�[���w���������const�ł͂Ȃ��̂Ŕ�const�Q�Ƃ�Ԃ�
int& int_observer_ptr::operator*() const
{
    return *pointer;
}

int main()
{
    int value = 0;

    int_observer_ptr pointer{ &value };
    std::cout << *pointer << std::endl;

    value = 42;
    
    std::cout << *pointer << std::endl;
}