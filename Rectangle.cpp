#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 0.0;
	height = 0.0;
}

Rectangle::Rectangle(double width, double height)
{
	this->width = width;
	this->height = height;
}

double Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

double Rectangle::getHeight() const
{
	return height;
}

void Rectangle::setHeight(double height)
{
	this->height = height;
}

double Rectangle::area()
{
	return  width * height;
}

double Rectangle::perimeter()
{
	return 2 * (width + height);
}
