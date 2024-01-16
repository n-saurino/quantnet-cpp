#ifndef VARIANTVISITOR_H
#define VARIANTVISITOR_H
#include <iostream>
#include <boost/variant/static_visitor.hpp>
#include "Shape.h"
#include "Point.h"
#include "Line.h"
#include "Circle.h"

class VariantVisitor: boost::static_visitor<void>{
    private:
    float m_dx;
    float m_dy;

    public:
    typedef void result_type;

    VariantVisitor(){
        m_dx = 0;
        m_dy = 0;
    }

    VariantVisitor(float x, float y){
        m_dx = x;
        m_dy = y;
    }

    void operator () (Saurino::CAD::Point& p) const{
        p.X(p.X()+m_dx);
        p.Y(p.Y()+m_dy);
    }

    void operator () (Saurino::CAD::Line& l) const{
        Saurino::CAD::Point p1(l.P1().X()+m_dx,l.P1().Y()+m_dy);
        Saurino::CAD::Point p2(l.P2().X()+m_dx,l.P2().Y()+m_dy);
        l.P1(p1); 
        l.P2(p2); 
    }

    void operator () (Saurino::CAD::Circle& c) const{
        Saurino::CAD::Point p1(c.CenterPoint().X()+m_dx,c.CenterPoint().Y()+m_dy);
        c.CenterPoint(p1);
    }

};
#endif