#pragma once
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape
{
	string name;
	string colour;

public:
	///конструктор по умолчанию;
	Shape();
	
	/// конструктор задающий значения объеков класса;
	/// name, colour - имя и цвет;
	Shape(string name, string colour);
	
	/// геттер имени;
	string getName() const;
	
	/// сеттер имени;
	/// name - имя;
	void setName(string name);
	
	/// геттер цвета;
	string getColour() const;

	/// сеттер цвета;
	/// colour - цвет;
	void setColour(string colour);
	
	/// виртуальный метод расчета площади;
	virtual double area();
	
	/// виртуальный метод расчета периметра;
	virtual double perimeter();
};

