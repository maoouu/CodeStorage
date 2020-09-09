#include <iostream>
#include <vector>
int simpleArraySum(std::vector<int> ar);

int main()
{
    std::vector<int> ar{1, 2, 3, 4, 10, 11};

    std::cout << simpleArraySum(ar) << std::endl;
    // 31
    return 0;
}

int simpleArraySum(std::vector<int> ar)
{
    int sum = 0;
    for (auto var : ar)
        sum += var;
    return sum;
}