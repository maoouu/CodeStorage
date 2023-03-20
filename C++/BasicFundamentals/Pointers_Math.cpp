#include <iostream>

int main()
{

    /*
        Pointers don't work like how math works in our head.
        Whenever you add integers to a pointer, it doesn't change 
        the memory address of the pointer, it only changes the element it is pointing to.
    */
    int bucky[5];
    int *ptr0 = &bucky[0];
    int *ptr1 = &bucky[1];
    int *ptr2 = &bucky[2];

    std::cout << "ptr0 is at: " << ptr0 << std::endl;
    std::cout << "ptr1 is at: " << ptr1 << std::endl;
    std::cout << "ptr2 is at: " << ptr2 << std::endl;

    ptr0 += 2;
    std::cout << "ptr0 is now " << ptr0 << std::endl;

    return 0;
}