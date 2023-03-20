#pragma once

#include <iostream>
#include <cmath>

class Circle
{
    const float PI = 3.14159;

private:
    int radius;
    std::string color;

public:
    Circle();
    Circle(int radius);
    Circle(std::string color);
    Circle(int radius, std::string color);

    int getRadius();
    void setRadius(int radius);

    std::string getColor();
    void setColor(std::string color);

    double getCircumference();
    int getDiameter();
    std::string promptColor();
};
