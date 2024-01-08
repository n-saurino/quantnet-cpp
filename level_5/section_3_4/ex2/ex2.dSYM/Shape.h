#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <stdio.h>
#include <string>

namespace Saurino {
	namespace CAD {
        class Shape
        {
        private:
            /* data */
            int m_id;

        public:
            Shape(/* args */);
            Shape(int);
            Shape(const Shape &source);
            ~Shape();
            // Member operator overloading
            Shape& operator = (const Shape& source);
            int ID() const;
            std::string ToString() const;
        };
    }
}

#endif