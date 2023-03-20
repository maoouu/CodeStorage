#include <iostream>
#include "Circle.h"

int main()
{
    Circle newCircle;

    newCircle.setColor("orange");
    newCircle.setRadius(15);
    std::cout << "The circumference of this circle is " << newCircle.getCircumference() << std::endl;
    return 0;
}