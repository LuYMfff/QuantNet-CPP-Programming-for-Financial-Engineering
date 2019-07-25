//
//  main.cpp
//  C++ Certificate
//  Test program for the Point class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include "Point.hpp"
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
	cout << pt.ToString() << endl;

	// Print the point coordinates.
	cout << pt.X() << " " << pt.Y() << endl;

	// Print the description of the second point.
	cout << pt2.ToString() << endl;

	// Print the point coordinates.
	cout << pt2.X() << " " << pt2.Y() << endl;

	// Print the distance between the origin and the first point.
	cout << "The distance between origin and " << pt.ToString() << " is "
		<< pt.Distance() << "." << endl;

	// Print the distance between the first point and the second point.
	cout << "The distance between " << pt.ToString() << " and " << pt2.ToString()
		<< " is " << pt.Distance(pt2) << "." << endl;

	return 0;
}