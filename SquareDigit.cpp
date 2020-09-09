#include <iostream>
#include <cmath>
#include <chrono>
#include <ctime>
long long squareDigits(long num);

int main()
{
    long sample;

    std::cout << "Enter a number: ";
    std::cin >> sample;
    std::cin.ignore();

    auto start = std::chrono::system_clock::now();
    std::cout << sample << " = " << squareDigits(sample) << std::endl;
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsedSeconds = end - start;
    std::cout << "Time Elapsed: " << elapsedSeconds.count() << "ms." << std::endl;
    return 0;
}

long long squareDigits(long num)
{
    std::string numString = std::to_string(num);
    std::string result = "";

    for (int i = 0; i < numString.length(); i++)
        result.append(std::to_string((int)pow(numString.at(i) - '0', 2))); // character to integer

    //std::cout << result << std::endl;
    return std::stoll(result);
}