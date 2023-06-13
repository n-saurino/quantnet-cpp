// ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    pnt_1.SetX(x);
    pnt_1.SetY(y);

    std::cout << "Please enter the x coordinate for the second point: ";
    std::cin >> x;
    std::cout << "Please enter the y coordinate for the second point: ";
    std::cin >> y;
    Point pnt_2;
    pnt_2.SetX(x);
    pnt_2.SetY(y);

    std::cout << "The distance between " << pnt_1.ToString() << " and the origin is: " << pnt_1.DistanceOrigin() << "\n";

    std::cout << "The distance between " << pnt_1.ToString() << " and "<< pnt_2.ToString() << " is: " << pnt_1.Distance(pnt_2) << "\n";

}