#include <iostream>
#include "Sally.h"

int main()
{
    Sally sallyObject;                  // Sally object "sallyObject"
    Sally *sallyPointer = &sallyObject; // pointer pointing to the object "sallyObject"

    sallyObject.printCrap();

    /*
        [Arrow Member Selection Operator]
        - whenever you're using a pointer to access
        stuff inside a class, you need to use an Arrow
        Member Selection Operator.
    */
    // Instead of this: sallyPointer.printCrap();

    sallyPointer->printCrap(); // you can use this

    (*sallyPointer).printCrap(); // you can also use this

    return 0;
}
