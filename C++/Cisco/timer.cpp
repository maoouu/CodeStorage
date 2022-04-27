#include <iostream>
#include <iomanip>

struct Clock
{
    int hour;
    int minutes;
};

int main()
{
    Clock clock;
    int duration;

    std::cout << "Enter the hour: ";
    std::cin >> clock.hour;
    std::cout << "Enter the minute: ";
    std::cin >> clock.minutes;
    std::cout << "Set the duration in minutes: ";
    std::cin >> duration;

    /*
    clock.hour = 23;
    clock.minutes = 59;
    duration = 1;
    */

    std::cout << "Verifying input..." << std::endl;

    if (clock.hour > 23 || clock.minutes > 59)
    {
        std::cout << "Invalid input, try again." << std::endl;
    }
    else
    {
        // Initial Time
        std::cout << "Current time: ";
        std::cout << std::setfill('0') << std::setw(2);
        std::cout << clock.hour << ":";
        std::cout << std::setfill('0') << std::setw(2);
        std::cout << clock.minutes << std::endl;

        // Computation
        int total_minutes = duration + clock.minutes;
        clock.hour = clock.hour + (total_minutes / 60);
        clock.minutes = total_minutes % 60;

        // if hour > 24, carry over by 1
        if (clock.hour > 23)
            clock.hour = clock.hour % 24;

        std::cout << "After " << duration << " minute/s, "
                  << "it is ";
        std::cout << std::setfill('0') << std::setw(2);
        std::cout << clock.hour << ":";
        std::cout << std::setfill('0') << std::setw(2);
        std::cout << clock.minutes << std::endl;
    }

    return 0;
}