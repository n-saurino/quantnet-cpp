// ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Array.h"
#include <iostream>

int main()
{
    // Using Declarations
    using Saurino::CAD::Line;
    using namespace Saurino::Containers;
    namespace SC = Saurino::CAD;
    Saurino::CAD::Point p1(10, 5);
    Saurino::CAD::Point p2;
    std::cout << p1 << "\n";

    Line l1(p2, p1);
    std::cout << l1;
    
    int r = 10;
    SC::Circle c(p1, r);


    std::cout << c.ToString();
    std::cout << "\n";
    std::cout << "The area of the circle is " << c.Area() << "\n";
    std::cout << "The circumference of the circle is " << c.Circumference() << "\n";

    Array a1;

    a1.SetElement(9, p1);

    std::cout << "PRINTING A1\n";
    for (int i = 0; i < a1.Size(); i++) {
        std::cout << a1.GetElement(i) << "\n";
    }
}
