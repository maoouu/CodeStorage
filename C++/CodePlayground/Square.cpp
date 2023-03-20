#include <iostream>

/**
 * == Square Validator ==
 * Written by: John Dale Reyes (BSCS-37B)
 * - it takes inputs for length and the width.
 * - outputs "It's a square", if length and width are equal.
 * - otherwise, it will output, "It's not a square".
 * 
 */
int main()
{
    int length, width;

    std::cout << "== Square Validator ==\n\n";
    std::cout << "Enter the length: ";
    std::cin >> length;
    std::cout << "Enter the width: ";
    std::cin >> width;

    if (length == width)
    {
        std::cout << "\nIt's a square!\n";
    }
    else
    {
        std::cout << "\nIt's not a square.\n";
    }

    return 0;
}