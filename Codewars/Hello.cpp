#include <string>
#include <iostream>

std::string greet()
{
    char x[] = {104, 101, 108, 108, 111};
    char y[] = {119, 111, 114, 108, 100, 33};
    std::string greeting = "";

    for (auto var : x)
        greeting += var;

    greeting.append(" ");

    for (auto var : y)
        greeting += var;

    return greeting;
}

int main()
{
    std::cout << greet() << std::endl;
    return 0;
}