/*
    Taylor, Charlie

    September 27, 2020

    CS A250
    A5 Inheritance
*/

#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder : public Circle
{
public:
    Cylinder() : height(0.0) {} 
    Cylinder(double, double, double);

    void setHeight(double newHeight);
    double getHeight() const;

    double calculateVolume() const;

    void printDimensions() const;

    ~Cylinder() {}

private : 
    double height;
};

#endif