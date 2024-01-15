#ifndef PointArray_cpp
#define PointArray_cpp
#include "PointArray.h"

PointArray::PointArray(){
    Array<Saurino::CAD::Point>();
}

PointArray::~PointArray(){
    // calls base class destructor
}


// Member functions
double PointArray::Length() const{
    double total_len = 0;

    for(int i = 0; i < Size()-1; i++){
        Saurino::CAD::Point p1 = this->GetElement(i);
        Saurino::CAD::Point p2 = this->GetElement(i+1);
        total_len += p1.Distance(p2);
    }
    return total_len;
}


// Member functions operator overloading

PointArray& PointArray::operator = (const PointArray& source){
    if(this != &source){
        delete[] m_data;
        this->m_data = new Saurino::CAD::Point[Size()];
        this->Size(source.Size());
        for(int i = 0; i < Size(); i++){
            Saurino::CAD::Point temp = source.GetElement(i);
            this->SetElement(i,temp);
        }
    }
    return *this;
}

#endif