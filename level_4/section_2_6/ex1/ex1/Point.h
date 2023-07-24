#ifndef POINT_H
#define POINT_H
#include <sstream>
#include <string>
#include <cmath>
#include <iostream>

namespace Saurino{

	namespace CAD{

		class Point
		{
		private:
			float m_x;
			float m_y;


		public:
			// Constructors
			Point();
			Point(float new_x, float new_y);
			~Point();

			// Accessing functions
			void X(float new_x);
			void Y(float new_y);
			float X() const;
			float Y() const;

			// Functionality
			std::string ToString() const;
			double Distance() const; //  Calculate the distance to the origin (0, 0).
			double Distance(const Point& p) const; // Calculate the distance between two points.

			// Member operator overloadings
			Point operator - () const;
			Point operator * (double factor) const;
			Point operator + (const Point& p) const;
			bool operator == (const Point& p) const;
			Point& operator = (const Point& source);
			Point& operator *= (double factor);

			// Global operator overloadings
			friend std::ostream& operator << (std::ostream& os, const Point& p); // Send to ostream.
		};
	}
}
#endif



