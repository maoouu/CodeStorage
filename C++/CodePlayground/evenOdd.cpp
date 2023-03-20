#include <iostream>
#include <limits>

int main()
{
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (std::cin.fail()) // kapag hindi int ang nilagay
    {
        std::cin.clear();                                                   // para di mag-infinite loop
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear bad input
        std::cout << "Bad input, please try again.\n";
    }
    else
    {
        // do this...
    }

    return 0;
}