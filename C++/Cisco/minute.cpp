#include <iostream>
#include <iomanip>

int main()
{
    int hour, minute, input;

    std::cout << "Enter the number of minutes: ";
    std::cin >> input;

    hour = input / 60;
    minute = input % 60;

    std::cout << "Hour is: " << hour << std::endl;
    std::cout << "Minute is: " << minute << std::endl;

    return 0;
}