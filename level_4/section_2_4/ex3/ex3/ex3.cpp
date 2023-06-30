// ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"

int main()
{
    
    Point p(1.0, 1.0);
    // The below fails when we require that the constructor with a single argument is only
    // used explicitly with the "explicit" keyword in the declaration
    /*
    if (p == 1.0) std::cout << "Equal!" << std::endl;
    else std::cout << "Not equal" << std::endl;
    */    
    
    if (p == (Point)1.0) std::cout << "Equal!" << std::endl;

}
