// ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"

/*
This is a test program to check the functionality of our Point class that has private
members for the x and y coordinates

This program asks the user for input, constructs the point based on that input and then
uses the ToString() function and the Getter functions to print the point values two 
different ways.
*/

int main()
{
    float x;
    float y;
    std::cout << "Please enter the x coordinate: ";
    std::cin >> x;
    std::cout << "Please enter the y coordinate: ";
    std::cin >> y;
    Point pnt;
    pnt.SetX(x);
    pnt.SetY(y);
    
    std::cout << "Printing with ToString() function:\n";
    std::cout << pnt.ToString() << "\n\n";

    std::cout << "Printing with GetX() and GetY() functions:\n";
    std::cout << "Point(" << pnt.GetX() << ", " << pnt.GetY() << ")\n";


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
