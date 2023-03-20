#include <iostream>

void passByValue(int variable);
void passByReference(int &variable);

/*
    There are 2 ways to pass variables to a function:
    1.) Pass by Value           [ex. function(variable)     ]
    2.) Pass by Reference       [ex. function(&variable)    ]

    - Whenever we create a function and pass it by value,
    we pass a copy of that variable into the function, so
    the original variable is unchanged.

    - Whenever we pass in a variable by reference, we pass in the
    variable's address. Doing so gives the function direct access
    to the variable, being able to change the value of the original
    variable.

    - One benefit of passing by reference is that Pointers and references are good to 
    avoid having to make a copy of a large object.
*/
int main()
{
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(sandy);

    std::cout << "Betty is now " << betty << std::endl; // Outputs 13
    std::cout << "Sandy is now " << sandy << std::endl; // Outputs 66

    return 0;
}

void passByValue(int variable) // Makes a variable copy, then changes that to 99
{
    variable = 99;
}

void passByReference(int &variable) // Directly changes variable to 66
{
    variable = 66;
}
