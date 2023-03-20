#include <iostream>
#include <vector>

std::vector<int> maps(const std::vector<int> &var)
{
    return var;
}

int main()
{
    std::vector<int> test_samples{1, 2, 3};

    for (auto var : test_samples)
    {
        //std::cout << maps(var) << std::endl;
    }

    return 0;
}