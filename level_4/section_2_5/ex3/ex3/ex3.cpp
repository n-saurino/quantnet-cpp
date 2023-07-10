// ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Array.h"

int main()
{
    Array a1;
    
    Array a2(5);
    Point p1(5, 10);
 
    a1.SetElement(9, p1);

    std::cout << "PRINTING A1\n";
    for (int i = 0; i < a1.Size(); i++) {
        std::cout << a1.GetElement(i) << "\n";
    }

    a1 = a1;

    a1 = a2;

    a1.SetElement(2, p1);

    std::cout << "PRINTING A1 AFTER ASSIGNMENT TO A2\n";
    for (int i = 0; i < a1.Size(); i++) {
        std::cout << a1.GetElement(i) << "\n";
    }

    std::cout << "PRINTING A1 ELEMENT USING [] OPERATOR\n";
    std::cout << a1[2] << "\n";

    a1[3] = a1[2];
    std::cout << "PRINTING A1 AFTER WRITING TO 4TH ELEMENT WITH [] OPERATOR\n";
    for (int i = 0; i < a1.Size(); i++) {
        std::cout << a1.GetElement(i) << "\n";
    }
}

