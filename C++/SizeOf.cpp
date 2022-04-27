#include <iostream>

int main()
{
    /*
        sizeof is a compile-time operator that determines the size,
        in bytes, of a variable or data type.
    */

    char letter;
    int num;
    std::string strings;
    float floatingPoint;
    double decimals;

    std::cout << "CHAR take up " << sizeof(letter) << " byte/s of initial memory.\n";
    std::cout << "INT take up " << sizeof(num) << " byte/s of initial memory.\n";
    std::cout << "STRING take up " << sizeof(letter) << " byte/s of initial memory.\n";
    std::cout << "FLOAT take up " << sizeof(floatingPoint) << " byte/s of initial memory.\n";
    std::cout << "DOUBLE take up " << sizeof(decimals) << " byte/s of initial memory.\n";

    // How about Arrays?
    double arrayDecimal[10];
    std::cout << "The size of arrayDecimal is " << sizeof(arrayDecimal) << " bytes.\n";

    return 0;
}