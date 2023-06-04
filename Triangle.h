#pragma once
#include "Shape.h"


class Triangle : public Shape
{
    double side1;
    double side2;
    double side3;

public:
    ///����������� �� ���������;
    Triangle();

    /// ����������� �������� �������� �������� ������;
    /// side1, side2, side3 - ������� ������������;
    Triangle(double side1, double side2, double side3);

    /// ������ ������� 1;
    double getSide1() const;

    /// ������ ������;
    void setSides(double side1, double side2, double side3);

    /// ������ ������� 2;
    double getSide2() const;

    /// ������ ������� 3;
    double getSide3() const;

    /// ���������������� ����� ������� �������;
    double area() const override;

    /// ���������������� ����� ������� ���������;
    double perimeter() const override;
};

