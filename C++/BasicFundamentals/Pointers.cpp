#include <iostream>

int main()
{
    /*
        A pointer variable points to a data type (like int or string)
        of the same type, and is created with the * operator. The address of the variable
        you're working with is assigned to the pointer.

        example:
    */
    std::string food = "Pizza"; // A food variable of type string
    std::string *ptr = &food;   // A pointer variable, with the name pointer, that stores the address of food

    //Output the value of food (Pizza)
    std::cout << food << "\n";

    //Output the memory address of food (0x61fde0)
    std::cout << &food << "\n";

    // Output the memory address of food with the pointer (0x61fde0)
    std::cout << ptr << std::endl;

    return 0;
}
