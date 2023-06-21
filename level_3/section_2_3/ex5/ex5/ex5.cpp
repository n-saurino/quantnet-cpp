// ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Line.h"
#include "Point.h"
#include <iostream>

int main()
{
    float x;
    float y;

    //Creating a dummy line and demonstrating getters and setters
    Point p1(5, 10);
    Point p2(1, 1);
    Line l1(p1, p2);

    std::cout << "The line object structure looks like " << l1.ToString() << "\n";
    std::cout << "The length of the line is " << l1.Length() << "\n";

    // Giving the user an opportunity to build a line and printing structure and length
    // Point 1
    std::cout << "Enter the x coordinate for the first point: ";
    std::cin >> x;
    std::cout << "Enter the y coordinate for the first point: ";
    std::cin >> y;
    p1.X(x);
    p1.Y(y);
    l1.P1(p1);
    std::cout << "You entered " << l1.P1().ToString() << "\n";


    // Point 2
    std::cout << "Enter the x coordinate for the second point: ";
    std::cin >> x;
    std::cout << "Enter the y coordinate for the second point: ";
    std::cin >> y;
    p2.X(x);
    p2.Y(y);
    l1.P2(p2);
    std::cout << "You entered " << l1.P2().ToString() << "\n";

    std::cout << "The line object structure looks like " << l1.ToString() << "\n";
    std::cout << "The length of the line is " << l1.Length() << "\n";
}
