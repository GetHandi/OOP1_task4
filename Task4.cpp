#include <iostream>
#include "Shape.h"
#include "Circle.h"


int main()
{
	Circle a;
	a.setColour("green");
	cout << a.getColour();
	return 0;
}