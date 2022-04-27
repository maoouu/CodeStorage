#include <iostream>

/*
    [Copying Constructors]
    - There is a special kind of constructor intended to copy one object 
    into another.

    - Constructors of this kind have one parameter referenced to an object 
    of the same class and are used to copy all important data from the 
    source object to the newly created object (or more precisely, to the object 
    currently being created).

    - They are referred to as copying constructors and are implicitly invoked when 
    a declaration of an object is followed by an initiator. 

    - It may be also invoked if the declaration specifies a constructor suitable for the declaration.
*/

class Class1
{
public:
    Class1(int val)
    {
        this->value = val;
    }
    Class1(Class1 const &source) // copying constructor
    {
        value = source.value + 100;
    }

    int value;
};

class Class2
{
public:
    Class2(int val)
    {
        this->value = val;
    }
    int value;
};

int main()
{
    Class1 object11(100);
    Class1 object12 = object11;
    Class2 object21(200);
    Class2 object22 = object21;

    std::cout << object12.value << std::endl;
    std::cout << object22.value << std::endl;

    return 0;
}
