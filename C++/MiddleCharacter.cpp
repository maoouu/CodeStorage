#include <iostream>

std::string get_middle(std::string sample)
{
    return sample.length() % 2 == 0 ? sample.substr(sample.length() / 2 - 1, 2) : sample.substr(sample.length() / 2, 1); // even
}

int main()
{
    std::string words[] = {"Santa", "Floccinaucinihilipilification", "Github", "Michael", "supercalifragilisticexpialidocious"};

    for (auto var : words)
        std::cout << var << " = " << get_middle(var) << std::endl;

    return 0;
}
