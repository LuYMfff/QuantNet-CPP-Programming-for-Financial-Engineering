//
//  main.cpp
//  C++ Certificate
//  Test program for the Point class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//



#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double newX, newY;
	double newX2, newY2;

	// Ask the user for the x- and y-coordinates of the first Point.
	cout << "Please input x and y coordinates of the first Point:" << endl;
	cin >> newX >> newY;

	// Create a Point object using the default constructor.
	Point pt;

	// Set the coordinates entered by the user.
	pt.X(newX);
	pt.Y(newY);

	// Ask the user for the x- and y-coordinates of the second Point.
	cout << "Please input x and y coordinates of the second Point:" << endl;
	cin >> newX2 >> newY2;

	// Create a Point object using the default constructor.
	Point pt2;

	// Set the coordinates entered by the user.
	pt2.X(newX2);
	pt2.Y(newY2);

	// Print the description of the first point.
	cout << pt << endl;

	// Print the description of the second point.
	cout << pt2 << endl;

	// Negate the coordinates.
	cout << "After negating Point 1, it becomes " << (-pt) << endl;

	// Scale the coordinates.
	cout << "2 times Point 1 is " << (pt * 2) << endl;

	// Add coordinates.
	cout << "After adding up Point 1 and point 2, it becomes " << (pt + pt2) << endl;

	// Equally compare operator.
	cout << "Point 1 equaling Point 2 is" << (pt == pt2 ? " true." : " false.") << endl;

	// Assignment operator.
	cout << "After assigning Point 2 to Point 1, Point 1 equaling Point 2 is" << ((pt = pt) == pt2 ? " true." : " false.") << endl;

	// Scale the coordinates & assign.
	cout << "After multipying Point 1 by 2, it becomes " << (pt *= 2) << endl;

	// Test Line class.
	Line ln(pt, pt2);
	cout << ln << endl;
	Line ln2 = ln;
	cout << ln2 << endl;

	// Test Circle class.
	Circle circle(pt, 1.0);
	cout << circle << endl;
	Circle circle2 = circle;
	cout << circle2 << endl;

	return 0;
}