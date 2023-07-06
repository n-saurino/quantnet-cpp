// ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"

int main()
{
    int arr_size;
    Point* p0 = new Point();
    Point* p1 = new Point(5, 10);
    Point* p2 = new Point(*p1);
    p0->X(0);
    p0->Y(0);


    std::cout << *p2 << "\n";
    std::cout << *p0 << "\n";
    std::cout << "Distance between " << *p0 << " and " << *p2 << " is " << p0->Distance(*p2) << "\n";

    std::cout << "Please enter the number of points that you'd like to include in the array: ";
    std::cin >> arr_size;
    // Point arr_pt[arr_size]; // compile error because not fixed array size at compile time
    Point* arr_pt = new Point[arr_size];
    // Can create the objects in the array by calling specific constructors using the syntax below
    /*
    Point* arr_pt = new Point[arr_size]{
        Point(),
        Point(1,1),
        Point(5, 10)
    };
    */


    delete p0;
    delete p1;
    delete p2;
    delete[] arr_pt;

}

