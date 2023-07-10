// ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"

int main()
{
	Point** pnt_ptr = new Point * [3];

	pnt_ptr[0] = new Point();
	pnt_ptr[1] = new Point(5, 10);
	pnt_ptr[2] = new Point(*pnt_ptr[1]);
	pnt_ptr[2]->X(2);
	pnt_ptr[2]->Y(2);

	for (int i = 0; i < 3; i++) {
		std::cout << *pnt_ptr[i] << "\n";
	}
	
	for (int i = 0; i < 3; i++) {
		delete pnt_ptr[i];
	}

	delete[] pnt_ptr;

}
