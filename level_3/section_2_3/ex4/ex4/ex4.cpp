// ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"

/*
This is a test program to check the functionality of our Point class that has private
members for the x and y coordinates

This program asks the user for input, constructs two points based on that input and then
uses the Distance functions to print the points respective distances
*/

int main()
{
    float x;
    float y;
    std::cout << "Please enter the x coordinate for the first point: ";
    std::cin >> x;
    std::cout << "Please enter the y coordinate for the first point: ";
    std::cin >> y;
    Point pnt_1;
    pnt_1.X(x);
    pnt_1.Y(y);

    std::cout << "Please enter the x coordinate for the second point: ";
    std::cin >> x;
    std::cout << "Please enter the y coordinate for the second point: ";
    std::cin >> y;
    Point pnt_2(x, y);


    const Point cp(1.5, 3.9); // Testing to confirm an error is thrown
    // cp.X(0.3); // error C2663: 'Point::X': no overloaded function has valid conversion for 'this' pointer
    // std::cout << cp.X() << std::endl; // error C2663: 'Point::X': no overloaded function has valid conversion for 'this' pointer

    std::cout << cp.X() << std::endl;


    std::cout << "The distance between " << cp.ToString() << " and the origin is: " << cp.Distance() << "\n";

    std::cout << "The distance between " << cp.ToString() << " and " << pnt_2.ToString() << " is: " << cp.Distance(pnt_2) << "\n";

}
