#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
    double width;
    double height;

public:
    ///����������� �� ���������;
    Rectangle();
   
    /// ����������� �������� �������� ������� ������;
    /// width, height - ������ � ������;
    Rectangle(double width, double height);
   
    /// ������ ������;
    double getWidth() const;
   

    /// ������ ������;
    /// width - ������;
    void setWidth(double width);
    
    /// ������ ������;
    double getHeight() const;
    
    /// ������ ������;
    /// height - ������;
    void setHeight(double height);
    
    /// ���������������� ����� ������� �������;
    double area() const override;
    
    /// ���������������� ����� ������� ���������;
    double perimeter() const override;
};

