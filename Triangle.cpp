#include "Triangle.h"

Triangle::Triangle()
{
	side1 = 0.0;
	side2 = 0.0;
	side3 = 0.0;
}

Triangle::Triangle(double side1, double side2, double side3)
{
	setSides(side1, side2, side3);
}

double Triangle::getSide1() const
{
	return side1;
}

void Triangle::setSides(double side1, double side2, double side3)
{
	if (side1 >= 0 && side2 >= 0 && side3 >= 0 && side3 <= side2 + side1 && side2 <= side1 + side3 && side1 <= side2 + side3)
	{
		this->side1 = side1;
		this->side2 = side2;
		this->side3 = side3;
	}
		
}

double Triangle::getSide2() const
{
	return side2;
}


double Triangle::getSide3() const
{
	return side3;
}


double Triangle::area() const
{
	double p = (side1 + side2 + side3) / 2;
	return sqrt(p*(p-side1)*(p-side2)*(p-side3));
}

double Triangle::perimeter() const
{
	return side1 + side2 + side3;
}
