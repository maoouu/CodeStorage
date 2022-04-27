#include <iostream>
#include <string>

int main()
{
    std::string secret = "WassupGaePeople";
    std::string password;

    std::cout << "Enter password: ";
    // std::cin >> input;
    std::getline(std::cin, password);

    if (secret.compare(password) == 0)
        std::cout << "Login Successful!" << std::endl;
    else
        std::cout << "Access Denied." << std::endl;

    return 0;
}