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
	///����������� �� ���������;
	Shape();
	
	/// ����������� �������� �������� ������� ������;
	/// name, colour - ��� � ����;
	Shape(string name, string colour);
	
	/// ������ �����;
	string getName() const;
	
	/// ������ �����;
	/// name - ���;
	void setName(string name);
	
	/// ������ �����;
	string getColour() const;

	/// ������ �����;
	/// colour - ����;
	void setColour(string colour);
	
	/// ����������� ����� ������� �������;
	virtual double area();
	
	/// ����������� ����� ������� ���������;
	virtual double perimeter();
};

