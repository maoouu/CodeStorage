#include <iostream>

/*  [Enumerated Types]
    The “C++” language pre-processor offers a method to create 
    symbols which will be replaced by their values during compilation time.

    The define directive has the following syntax:
    # define <symbol> <string>

    - the <symbol> is an arbitrary chosen name like any
    variables or functions.
    - naming convention states that it should contain UPPER_CASE
    characters only.
    - the <string> is just a series of characters.

    The caveat is, doing operations using define directives
    is not recommended.
    There's an alternative to this, Enumerated Types
*/

enum weekday
{
    SUNDAY, // first enum item starts at 0
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

/*  [Assigning an enum to a variable]
    The enumerated type is treated in a very specific way. 
    When a value of the type is assigned to any INT value, everything is OK and the compiler 
    accepts it without reservations.

    int day = SUNDAY;
*/
/*  [Enum Casting]
    When the enumerated type plays the role of an l-value, 
    the situation changes.

    weekday day = static_cast<weekday>(0);
    weekday f = (weekday)0; // alternative way of typecasting
*/
/*  [Enum type values]
    Enum type values are ints and may be used
    as arguments in any operations accepting ints.

    eg.
    std::cout << SUNDAY << std::endl;  // outputs 0
*/
/*  [Assigning int values to symbols]
    Any of the elements of the enum type list may be 
    followed by the ‘=’ sign and an expression resulting 
    in an int value.

    enum Symbols
    {
        ALPHA = -1,
        BETA = 1,
        GAMMA
    };
*/
/*  [Enum Symbols must be UNIQUE]
    Enum type symbols MUST BE UNIQUE across a namespace.
    e.g.
    enum Animals {DOG, CAT, CHUPACABRA};
    enum COMMANDS {LS, CD, CAT};
    // will cause compilation error

    You can avoid this conflict by putting
    one or both of the conflicting enum types inside
    a separate CLASS/CLASSES

    class Animals {
    public:
        enum names {DOG, CAT, CHUPACABRA};
    };

    class Commands {
    public:
        enum names {LS, CD, CAT};
    };

    int main()
    {
        Animals::names a = Animals::CAT;
        Commands::names b = Commands::CAT;
        return 0;
    }
*/

weekday operator+(weekday day, int val)
{
    return weekday((int(day) + val) % 7);
}

int main()
{
    weekday d = SATURDAY;
    d = d + 1;
    return 0;
}
