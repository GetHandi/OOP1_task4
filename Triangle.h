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

    /// ������ ������� 1;
    /// side 1 - ������� 1;
    void setSide1(double side1);

    /// ������ ������� 2;
    double getSide2() const;

    /// ������ ������� 2;
    /// side 2 - ������� 2;
    void setSide2(double side2);

    /// ������ ������� 3;
    double getSide3() const;

    /// ������ ������� 3;
    /// side 3 - ������� 3;
    void setSide3(double side3);

    /// ���������������� ����� ������� �������;
    double area() override;

    /// ���������������� ����� ������� ���������;
    double perimeter() override;
};

