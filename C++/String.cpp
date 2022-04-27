#include <iostream>
#include <string>

int main()
{
    // Strings are called from a <string> library
    std::string greeting = "hello world!";
    std::cout << greeting << std::endl;

    // You can concatenate strings using +
    std::string firstName = "John Dale ";
    std::string lastName = "Reyes";
    std::string fullName = firstName + lastName;
    std::cout << fullName << std::endl;

    //Or you can use the append()
    std::string adjective = "Wonderful ";
    std::string noun = "world";
    std::cout << adjective.append(noun) << std::endl;
    
    return 0;
}