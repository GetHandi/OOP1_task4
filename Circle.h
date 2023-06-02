#pragma once
#include "Shape.h"

class Circle : public Shape
{
    double radius;

public:
    ///����������� �� ���������;
    Circle();

    /// ����������� �������� �������� ������� ������;
    /// radius - ������;
    Circle(double radius);

    /// ������ �������;
    /// radius - ������;
    double getRadius() const;

    /// ������ �������;
    void setRadius(double radius);

    /// ���������������� ����� ������� �������;
    double area() override;

    /// ���������������� ����� ������� ���������;
    double perimeter() override;
};

