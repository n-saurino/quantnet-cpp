#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Array.cpp"

class PointArray: public Array<Saurino::CAD::Point>{
    private:

    public:
    PointArray();
    ~PointArray();

    // Member functions
    double Length() const; // returns the total length between the points in the array

    // Member functions operator overloading
    PointArray& operator = (const PointArray& source);

};
#endif