#include <iostream>
#include <limits>

std::string isLeapYear(int year)
{
    return ((year % 4 == 0 || year % 100 == 0) || (year % 100 == 0 && year % 400 == 0)) ? " is a leap year" : " is not a leap year";
}

int main()
{
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Bad input, try again.\n";
    }
    else
    {
        std::cout << year << isLeapYear(year);
    }
}