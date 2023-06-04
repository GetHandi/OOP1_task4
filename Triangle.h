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

    /// сеттер сторон;
    void setSides(double side1, double side2, double side3);

    /// геттер стороны 2;
    double getSide2() const;

    /// геттер стороны 3;
    double getSide3() const;

    /// переопределяемый метод расчета площади;
    double area() const override;

    /// переопределяемый метод расчета периметра;
    double perimeter() const override;
};

