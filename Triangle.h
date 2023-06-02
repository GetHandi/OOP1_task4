#pragma once
#include "Shape.h"


class Triangle : public Shape
{
    double side1;
    double side2;
    double side3;

public:
    ///конструктор по умолчанию;
    Triangle();

    /// конструктор задающий значения объектов класса;
    /// side1, side2, side3 - стороны треуголбника;
    Triangle(double side1, double side2, double side3);

    /// геттер стороны 1;
    double getSide1() const;

    /// сеттер стороны 1;
    /// side 1 - сторона 1;
    void setSide1(double side1);

    /// геттер стороны 2;
    double getSide2() const;

    /// сеттер стороны 2;
    /// side 2 - сторона 2;
    void setSide2(double side2);

    /// геттер стороны 3;
    double getSide3() const;

    /// сеттер стороны 3;
    /// side 3 - сторона 3;
    void setSide3(double side3);

    /// переопределяемый метод расчета площади;
    double area() override;

    /// переопределяемый метод расчета периметра;
    double perimeter() override;
};

