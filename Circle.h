#pragma once
#include "Shape.h"

class Circle : public Shape
{
    double radius;

public:
    ///конструктор по умолчанию;
    Circle();

    /// конструктор задающий значения объеков класса;
    /// radius - радиус;
    Circle(double radius);

    /// геттер радиуса;
    /// radius - радиус;
    double getRadius() const;

    /// сеттер радиуса;
    void setRadius(double radius);

    /// переопределяемый метод расчета площади;
    double area() override;

    /// переопределяемый метод расчета периметра;
    double perimeter() override;
};

