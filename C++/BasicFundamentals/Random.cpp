#include <iostream>
#include <ctime>

int main()
{
    //srand(time(0)); // uses time to change the random seed

    for (int i = 0; i < 10; i++)
    {
        std::cout << (rand() % 6) + 1 << std::endl;
    }
}