#include <iostream>
#include <string>

void printInfo(std::string &str)
{
    std::cout << "[String Info]" << std::endl;
    std::cout << "String: \"" << str << "\"" << std::endl;
    std::cout << "Length: " << str.length() << " characters" << std::endl;
    std::cout << "Capacity: " << str.capacity() << " bytes" << std::endl;
    std::cout << "Max Size: " << str.max_size() << " characters" << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::string sample = "wassup";
    std::string sample2 = "gae people";
    //printInfo(sample);

    /*
    // sample.reserve(50);
    sample.resize(50, '?');
    printInfo(sample);

    sample.resize(4);
    printInfo(sample);

    sample.clear();
    printInfo(sample);
    */

    /*
    for (int i = 0; i < sample.length(); i++)
        sample[i] = sample[i] - 'a' + 'B';

    std::cout << sample << std::endl;
    */

    std::cout << sample << ";" << sample2 << std::endl;
    sample.swap(sample2);
    std::cout << sample << ";" << sample2 << std::endl;
    return 0;
}