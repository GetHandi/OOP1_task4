#pragma once
#include <numbers>
#include "Shape.h"

using std::numbers::pi;

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
    double area() const override;

    /// переопределяемый метод расчета периметра;
    double perimeter() const override;
};

