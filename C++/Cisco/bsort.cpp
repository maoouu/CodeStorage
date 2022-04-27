#include <iostream>

int main()
{
    int numbers[5] = {5, 2, 8, 6, 1};
    int placeholder;
    bool isSwapped;

    std::cout << "Before swap: ";
    for (auto var : numbers)
        std::cout << " " << var;
    std::cout << std::endl;

    do
    {
        isSwapped = false; // initialize to FALSE
        for (int i = 0; i < 4; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                isSwapped = true;
                placeholder = numbers[i];     // put into temporary variable "placeholder"
                numbers[i] = numbers[i + 1];  // shift the latter variable to the left
                numbers[i + 1] = placeholder; // place the former variable to the right
            }
        }

    } while (isSwapped);

    std::cout << "After swap: ";
    for (auto var : numbers)
        std::cout << " " << var;
    std::cout << std::endl;

    return 0;
}
