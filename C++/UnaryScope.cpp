#include <iostream>

int tuna = 25; // Global variable

int main()
{
    double tuna = 69.45; // Local variable

    std::cout << "Global: " << ::tuna << std::endl; // 25
    std::cout << "Local: " << tuna << std::endl;    // 69.45

    return 0;
}