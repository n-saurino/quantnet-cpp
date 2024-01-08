#include <iostream>
#include "Line.h"
#include "Point.h"

using namespace std;

/*
    If the destructor of the base class is not virtual, 
    then the destructor of the derived class will not be called.
*/

int main(){
    Saurino::CAD::Shape* shapes[3];
    shapes[0]=new Saurino::CAD::Shape;
    shapes[1]=new Saurino::CAD::Point;
    shapes[2]=new Saurino::CAD::Line;

    for (int i=0; i!=3; i++) delete shapes[i];
}