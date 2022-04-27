#include <iostream>

int main()
{
    // A reference variable is a "reference" to an existing variable,
    // and it is created with the "&" operator:
    std::string food = "Pizza";
    std::string &meal = food;

    std::cout << food << std::endl;
    // Outputs Pizza
    std::cout << meal << std::endl;
    // Outputs Pizza, as well

    return 0;
}