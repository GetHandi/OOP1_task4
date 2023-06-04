#pragma once
#include <numbers>
#include "Shape.h"

using std::numbers::pi;

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
    double area() const override;

    /// ���������������� ����� ������� ���������;
    double perimeter() const override;
};

