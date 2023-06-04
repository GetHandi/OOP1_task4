#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
    double width;
    double height;

public:
    ///конструктор по умолчанию;
    Rectangle();
   
    /// конструктор задающий значения объеков класса;
    /// width, height - ширина и высота;
    Rectangle(double width, double height);
   
    /// геттер ширины;
    double getWidth() const;
   

    /// сеттер ширины;
    /// width - ширина;
    void setWidth(double width);
    
    /// геттер высоты;
    double getHeight() const;
    
    /// сеттер высоты;
    /// height - высота;
    void setHeight(double height);
    
    /// переопределяемый метод расчета площади;
    double area() const override;
    
    /// переопределяемый метод расчета периметра;
    double perimeter() const override;
};

