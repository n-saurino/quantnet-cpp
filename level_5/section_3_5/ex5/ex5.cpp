#include <iostream>
#include "Line.h"
#include "Point.h"
#include "Circle.h"

using namespace std;

int main(){
    Saurino::CAD::Shape* shapes[2];

    shapes[0]=new Saurino::CAD::Point;
    shapes[1]=new Saurino::CAD::Line(Saurino::CAD::Point(1.0, 2.5), Saurino::CAD::Point(3.4, 5.2));

    for (int i=0; i!=2; i++) shapes[i]->Print();
    for (int i=0; i!=2; i++) delete shapes[i];
}