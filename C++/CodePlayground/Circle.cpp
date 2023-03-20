#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle()
{
    std::cout << "A new circle has been created!\n";
    this->radius = 1;
    this->color = "red";
}

Circle::Circle(int radius)
{
    std::cout << "A new circle has been created!\n";
    setRadius(radius);
    this->color = "red";
}

Circle::Circle(std::string color)
{
    std::cout << "A new circle has been created!\n";
    setColor(color);
    this->radius = 1;
}

Circle::Circle(int radius, std::string color)
{
    std::cout << "A new circle has been created!\n";
    setRadius(radius);
    setColor(color);
}

int Circle::getRadius()
{
    return this->radius;
}

void Circle::setRadius(int radius)
{
    std::cout << "Circle radius has been set to " << radius << std::endl;
    this->radius = radius;
}

std::string Circle::getColor()
{
    return this->color;
}

void Circle::setColor(std::string color)
{
    std::cout << "Circle color has been set to " << color << std::endl;
    this->color = color;
}

double Circle::getCircumference()
{
    return PI * pow(this->radius, 2);
}

int Circle::getDiameter()
{
    return pow(this->radius, 2);
}

std::string Circle::promptColor()
{
    return "The circle's color is " + this->color;
}