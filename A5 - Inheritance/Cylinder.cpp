/*
    Taylor, Charlie

    September 27, 2020

    CS A250
    A5 Inheritance
*/

#include "Circle.h"
#include "Cylinder.h"
using namespace std;

Cylinder::Cylinder(double newRadius, double newPi, double newHeight) 
    : Circle(newRadius, newPi)
{
    height = newHeight;
}

void Cylinder::setHeight(double newHeight)
{
    height = newHeight;
}

double Cylinder::getHeight() const
{
    return height;
}

double Cylinder::calculateVolume() const
{
    return (getPi() * (getRadius() * getRadius()) * height);
}

void Cylinder::printDimensions() const
{
    std::cout.setf(ios::fixed);
	std::cout.setf(ios::showpoint);
	std::cout.precision(2);
    
    Circle::printDimensions();
    cout <<"Height: " << height;
}