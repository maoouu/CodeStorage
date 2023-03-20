/**
 * Welcome to C++ Programming!
 * This is a comment, this block of text isn't read by the compiler.
 * This one in particular is a documentation comment.
 */

// You can also make a single line comment

/* And this is a 
multiline

comment
!!!*/

// (#include) imports all the libraries and header that you'll need
#include <iostream>
#include <string>

// this is used so that you don't need to type
// std:: all the time.
using namespace std;

// This is the main function/method, this is where all your code is run.
int main()
{
    cout << "hello world!" << endl; // This is used to output to the console 'endl' is used output to the next line

    // you can also declare variables by
    int num1;
    num1 = 1;

    //or
    int num2 = 2;

    // Examples of data types
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'D';       // Character
    char asciiLetter = 65;     // Character (ASCII)
    bool myBoolean = true;     // Boolean
    string myText = "Hello";   // String

    // exit code for main()
    return 0;
}