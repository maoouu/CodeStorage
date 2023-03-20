#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

void sortMaster(int size, std::vector<long> array);

int main()
{
    srand(time(NULL));

    long randomSet;
    std::cout << "Enter a number: ";
    std::cin >> randomSet;

    std::vector<long> array(randomSet);

    for (int i = 0; i < array.size(); i++)
        array[i] = rand() % randomSet + 1;

    sortMaster(array.size(), array);
    return 0;
}

void sortMaster(int size, std::vector<long> array)
{
    std::cout << "\n\n";
    for (auto var : array)
        std::cout << var << " ";

    std::cout << "\n\n\n\n";

    sort(array.begin(), array.end());
    for (auto var : array)
        std::cout << var << " ";

    std::cout << "\n\n";
}
