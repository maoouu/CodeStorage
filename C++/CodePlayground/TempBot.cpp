#include <iostream>

/**
 * == Temperature Bot ==
 * Written by: John Dale Reyes (BSCS-37B)
 * - it takes an input from the user and the bot will
 * react to the corresponding temperature.
 */
int main()
{
    double temperature;

    std::cout << "== Temperature Bot ==\n\n";
    std::cout << "Enter the temperature (in celsius): ";
    std::cin >> temperature;

    if (temperature > 36) // Degrees Hotter than Body Temp.
    {
        if (temperature >= 100)
        {
            std::cout << "It is melting hot!\n";
        }
        else if (temperature >= 45)
        {
            std::cout << "It is scorching hot!\n";
        }
        else
        {
            std::cout << "It is warmer than usual.\n";
        }
    }
    else if (temperature < 36) // Degrees Colder than Body Temp.
    {
        if (temperature <= 0)
        {
            std::cout << "It is freezing!\n";
        }
        else if (temperature <= 25)
        {
            std::cout << "It is very cold!\n";
        }
        else
        {
            std::cout << "It is cooler than usual.\n";
        }
    }
    else
    {
        std::cout << "Current temperature is stable.\n";
    }

    return 0;
}