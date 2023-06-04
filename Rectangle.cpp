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
	if(width >= 0)
		this->width = width;
	else
		this->width = 0;
}

double Rectangle::getHeight() const
{
	return height;
}

void Rectangle::setHeight(double height)
{
	if (width >= 0)
		this->height = height;
	else
		this->height = 0;
}

double Rectangle::area() const
{
	return  width * height;
}

double Rectangle::perimeter() const
{
	return 2 * (width + height);
}
