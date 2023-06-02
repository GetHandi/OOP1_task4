#include "Shape.h"

Shape::Shape()
{
	name = "<no_name>";
	colour = "<no_colour>";
}

Shape::Shape(string name, string colour)
{
	this->name = name;
	this->colour = colour;
}

string Shape::getName() const
{
	return name;
}

void Shape::setName(string name)
{
	this->name = name;
}

string Shape::getColour() const
{
	return colour;
}

void Shape::setColour(string colour)
{
	this->colour = colour;
}

double Shape::area()
{
	return 0.0;
}

double Shape::perimeter()
{
	return 0.0;
}
