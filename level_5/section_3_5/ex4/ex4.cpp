#include <iostream>
#include "Line.h"
#include "Point.h"
#include "Circle.h"

using namespace std;

int main(){
    Saurino::CAD::Shape* shapes[10];

    shapes[0]=new Saurino::CAD::Line;
    shapes[1]=new Saurino::CAD::Point;
    shapes[2]=new Saurino::CAD::Line;
    shapes[3]=new Saurino::CAD::Point;
    shapes[4]=new Saurino::CAD::Circle;
    shapes[5]=new Saurino::CAD::Circle;
    shapes[6]=new Saurino::CAD::Line;
    shapes[7]=new Saurino::CAD::Point;
    shapes[8]=new Saurino::CAD::Line;
    
    /*
    Error when trying to create a Shape object from an abstract class with 
    a pure virtual function:

    object of abstract class type "Saurino::CAD::Shape" is not allowed:C/C++(322)
    ex4.cpp(14, 21): function "Saurino::CAD::Shape::Draw" is a pure virtual function
    */
    // shapes[3] = new Saurino::CAD::Shape;


    shapes[9]=new Saurino::CAD::Line(Saurino::CAD::Point(1.0, 2.5), Saurino::CAD::Point(3.4, 5.2));

    for (int i=0; i!=10; i++) shapes[i]->Draw();
    for (int i=0; i!=10; i++) delete shapes[i];
}