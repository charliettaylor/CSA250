#include "Circle.h"
#include "Cylinder.h"

#include <vector>
#include <iostream>
#include <string>
#include <iterator>

using namespace std;

//Declaration function testClassCircle
void testClassCircle();

//Declaration function testClassCylinder
void testClassCylinder();

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	testClassCircle();

	testClassCylinder();

	cout << endl;
	system("Pause");
	return 0;
}

//Definition function testClassCircle
void testClassCircle()
{
	Circle firstCircle;
	firstCircle.setRadius(2.45);
	firstCircle.setPi(3.14);
	cout << "Radius: " << firstCircle.getRadius() << endl;
	cout << "Pi: " << firstCircle.getPi() << endl;
	cout << "Area: " << firstCircle.calculateArea() << endl;

	cout << endl;

	Circle secondCircle(3.0,7.21);
	secondCircle.printDimensions();
	cout << "Area: " << secondCircle.calculateArea() << endl;

	cout << endl;
}

//testClassCylinder
void testClassCylinder()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "First Cylinder" << endl;
	Cylinder firstCylinder;
	firstCylinder.setRadius(3.0);
	firstCylinder.setPi(3.142);
	firstCylinder.setHeight(3.0);
	cout << "Radius: " << firstCylinder.getRadius() << endl;
	cout << "Pi: " << firstCylinder.getPi() << endl;
	cout << "Height: " << firstCylinder.getHeight() << endl;
	cout << "Volume: " << firstCylinder.calculateVolume() << endl;

	cout << endl;

	cout << "Second Cylinder" << endl;
	Cylinder secondCylinder(1.7,3.142,2.4);
	secondCylinder.printDimensions();
	cout << "Volume: " << secondCylinder.calculateVolume() << endl;

	cout << endl;
}