#include "Circle.h"

Circle::Circle()
{
	radius = 0.0;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	if (radius >= 0)
		this->radius = radius;
	else
		this->radius = 0;
}

double Circle::area() const
{
	
	return pi * radius * radius;
}

double Circle::perimeter() const
{
	return 2 * pi * radius;
}
