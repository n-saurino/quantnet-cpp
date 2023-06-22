// ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Point.h"
#include "Circle.h"
#include <iostream>

int main()
{
    double x;
    double y;
    double r;

    //Creating a dummy circle and demonstrating getters and setters
    Point p1(10, 10);
    r = 10;
    Circle c(p1, r);


    std::cout << c.ToString();
    std::cout << "\n";
    std::cout << "The area of the circle is " << c.Area() << "\n";
    std::cout << "The circumference of the circle is " << c.Circumference() << "\n";

    // Giving the user an opportunity to build a line and printing structure and length
    // Point 1
    std::cout << "Enter the x coordinate for the center point: ";
    std::cin >> x;
    std::cout << "Enter the y coordinate for the center point: ";
    std::cin >> y;
    p1.X(x);
    p1.Y(y);
    c.CenterPoint(p1);
    std::cout << "You entered " << c.CenterPoint().ToString() << "\n";
    std::cout << "Enter the new radius: ";
    std::cin >> r;
    c.Radius(r);
    std::cout << "You entered " << c.Radius() << "\n";


    std::cout << c.ToString();
    std::cout << "\n";
    std::cout << "The area of the circle is " << c.Area() << "\n";
    std::cout << "The circumference of the circle is " << c.Circumference() << "\n";
}
