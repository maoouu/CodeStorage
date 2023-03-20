
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <limits>

int atm_ctrl;
float balance = 100.00;
float dep_balance;
float clm_balance;

void clrscr()
{
    //Clears the screen
    std::cout << "\033[2J";
    // fallback code: std::cout << "\033[2J\033[1;1H";
}

void promptBuffer()
{
    std::cout << "\n\nPress ENTER to continue...";
    std::cin.ignore();
}

float addBalance(float balance, float dep_balance)
{
    return balance + dep_balance;
}

float subBalance(float balance, float clm_balance)
{
    return balance - clm_balance;
}

int main()
{

menu:
    std::cout << "==CiscoBank ATM==" << std::endl;
    std::cout << "1. Check Balance\n"
              << "2. Deposit Cash\n"
              << "3. Withdraw Cash\n"
              << "4. Exit" << std::endl;
    std::cout << "\n\nChoose Number: ";
    std::cin >> atm_ctrl;
    clrscr();

    switch (atm_ctrl)
    {
    case 1:
        std::cout << "Your current balance is $" << std::setprecision(2) << std::fixed << balance;
        std::cin.ignore();
        promptBuffer();
        clrscr();

        goto menu;

    case 2:
        std::cout << "Enter deposit amount: $";
        std::cin >> dep_balance;
        std::cin.ignore();
        clrscr();

        if (dep_balance > 500.00)
        {
            std::cout << "Error: Cannot deposit larger than $500.00." << std::endl;
            promptBuffer();
            clrscr();
            goto menu;
        }

        balance = addBalance(balance, dep_balance);

        std::cout << "$" << dep_balance << " has been added to your account!" << std::endl;
        promptBuffer();
        clrscr();

        goto menu;

    case 3:
        std::cout << "Enter withdraw amount: $";
        std::cin >> clm_balance;
        std::cin.ignore();
        clrscr();

        if (clm_balance > balance)
        {
            std::cout << "Error: Withdraw amount is larger than your balance." << std::endl;
            promptBuffer();
            clrscr();
            goto menu;
        }

        balance = subBalance(balance, clm_balance);

        std::cout << "$" << clm_balance << " has been claimed from your account!" << std::endl;
        promptBuffer();
        clrscr();

        goto menu;

    case 4:
        goto exit;

    default:
        std::cin.clear();                                                   // clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input

        std::cout << "Invalid input, please re-enter. \n";
        promptBuffer();

        clrscr();  //clear the screen
        goto menu; // go back to menu
    }

exit:
    return 0;
}
