/*
    Taylor, Charlie

    September 27, 2020

    CS A250
    A5 Inheritance
*/

#include "Circle.h"
using namespace std;

Circle::Circle(double newRadius, double newPi)
{
    radius = newRadius;
    pi = newPi;
}

void Circle::setRadius(double newRadius)
{
    radius = newRadius;
}

void Circle::setPi(double newPi)
{
    pi = newPi;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getPi() const
{
    return pi;
}

double Circle::calculateArea() const
{
    return (pi * radius * radius);
}
    
void Circle::printDimensions() const
{
    cout<<"Radius: " << radius <<"\n"
    <<"Pi: " << pi;
}
