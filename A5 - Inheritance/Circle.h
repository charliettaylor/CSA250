/*
    Taylor, Charlie

    September 27, 2020

    CS A250
    A5 Inheritance
*/

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>

class Circle
{
public:
    Circle() : radius(0.0), pi(3.142) {}
    Circle(double, double);
    void setRadius(double);
    void setPi(double);

    double getRadius() const;
    double getPi() const;

    double circumference() const;
    double calculateArea() const;
    
    void printDimensions() const;
    ~Circle() {}

private : 
    double radius;
    double pi;
};

#endif