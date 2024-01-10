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
            virtual ~Shape();
            // Member operator overloading
            Shape& operator = (const Shape& source);
            int ID() const;
            virtual std::string ToString() const;
            virtual void Draw() const=0;
            void Print() const;
        };
    }
}

#endif