#include <conio.h>
#include <iostream>

using namespace std;

void clear()
{
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    std::cout << "\x1B[2J\x1B[H";
}

void bufferScreen()
{
    cout << "\n\n"
         << "Press ENTER to continue...";
    cin.ignore(); //allows ENTER to be pressed without taking actual input
}

int main()
{
    string player_name;
    int health, armor, base_attack;

    ///Startup Screen
    cout << "<== Rollenspiel: Text-Based RPG Game ==>";
    bufferScreen();
    clear();

    ///Character
    cout << "Please enter your name: ";
    cin >> player_name;
    clear();
    cin.ignore();

    cout << "Hello, " << player_name << ". Welcome to Rollenspiel!";
    bufferScreen();
    clear();

    return 0;
}