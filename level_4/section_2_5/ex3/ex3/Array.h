#ifndef ARRAY_H
#define ARRAY_H
#include "Point.h"

class Array
{
private:
	Point** m_data;
	int m_size;

public:
	// Constructor
	Array();
	Array(int size);
	Array(const Array& src);
	// Destructor
	~Array();

	// member functions
	int Size() const;
	void SetElement(int index, Point src);
	Point& GetElement(int index);

	// overloaded operators
	Array& operator = (Array& src);
	Point& operator [] (int index);
	const Point& operator [] (int index) const;

};

#endif