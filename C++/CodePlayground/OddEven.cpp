#include <iostream>

void displayEven(long number);
void displayOdd(long number);

int main()
{
    long number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    displayEven(number);
    displayOdd(number);
    return 0;
}

void displayEven(long number)
{
    std::cout << "\nEven:\n";
    for (long i = 1; i <= number; i++)
        std::cout << i * 2 << " ";
    std::cout << "\n\n\n";
}

void displayOdd(long number)
{
    std::cout << "Odd:\n";
    for (long i = 1; i <= number; i++)
        std::cout << i * 2 - 1 << " ";
    std::cout << "\n";
}