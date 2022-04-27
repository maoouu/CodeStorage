#include <iostream>

int main()
{
    int num1 = 10;
    int *ptr = &num1;

    std::cout << ptr << std::endl;

    return 0;
}