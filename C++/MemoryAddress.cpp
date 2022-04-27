#include <iostream>

int main()
{
    // It can also be used to get the memory address of a variable;
    // which is the location of where the variable is stored
    // on the computer.
    std::string food = "Pizza";

    std::cout << &food << std::endl;
    // Outputs an address, like
    // '0x61fde0'

    return 0;
}