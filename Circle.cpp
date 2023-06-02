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
	this->radius = radius;
}

double Circle::area()
{
	return 3.14 * radius * radius;
}

double Circle::perimeter()
{
	return 2 * 3.14 * radius;
}
