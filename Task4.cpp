#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"




int main()
{
	/*
	Circle a;
	a.setColour("green");
	cout << a.getName();

	Shape b();
	*/


	Rectangle Rr;
	Rr.setColour("green");
	Rr.setName("rectangle1");
	Rr.setHeight(12);
	Rr.setWidth(12);

	cout << Rr.getColour() << '\t' << Rr.getHeight() <<endl;
	
	
	Rectangle R(4, 5);
	cout << R.perimeter() << endl;
	cout << R.area() << endl;

	Triangle T(3, 4, 2);
	cout << T.perimeter() << endl;
	cout << T.area() << endl;

	Circle C(14);
	cout << C.perimeter() << endl;
	cout << C.area() << endl;


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// (1) указатели на объект производного класса;
	Circle a1;
	Circle *ukaz1;
	ukaz1 = &a1;
	


	ukaz1->setColour("red");





	return 0;
}