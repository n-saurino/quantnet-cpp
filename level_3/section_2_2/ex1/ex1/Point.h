#ifndef POINT_H
#define POINT_H
#include <string>
#include <sstream> 

// Point Class declaration

class Point
{
private:
	float m_x;
	float m_y;
	
public:
	Point();
	Point(float x, float y);
	~Point();
	float GetX();
	float GetY();
	void SetX(float);
	void SetY(float);
	std::string ToString();

};

#endif