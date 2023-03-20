#include <iostream>

/**
 * == Triangle Validator ==
 * Program written by: John Dale Reyes (BSCS-37B)
 * 
 * (Submitted as part of an Assignment in Computer Programming I regarding conditional statements,
 * comparators and logical operators)
 * 
 * - This program takes 3 integer values from the user and checks whether the inputs
 * are valid or invalid to make a Triangle.
 * 
 * - If the following inputs are valid, it checks whether the triangle is an Isosceles, Scalene or an Equilateral Triangle.
 */
int main()
{
    int sideA, sideB, sideC;
    bool isTriangle;

    std::cout << "==Triangle Validator==\n";
    std::cout << "Enter side A: ";
    std::cin >> sideA;
    std::cout << "Enter side B: ";
    std::cin >> sideB;
    std::cout << "Enter side C: ";
    std::cin >> sideC;

    // bool is True if the inputted sides are valid
    isTriangle = sideA + sideB > sideC && sideB + sideC > sideA && sideC + sideA > sideB;

    if (!isTriangle)
    {
        std::cout << "Triangle not valid.\n";
    }
    else
    {
        std::cout << "Triangle is valid.\n";

        if (sideA == sideB && sideB == sideC)
        {
            std::cout << "It is an Equilateral Triangle.\n";
        }
        else if (sideA == sideB || sideB == sideC || sideA == sideC)
        {
            std::cout << "It is an Isosceles Triangle.\n";
        }
        else
        {
            std::cout << "It is a Scalene Triangle.\n";
        }
    }

    return 0;
}
