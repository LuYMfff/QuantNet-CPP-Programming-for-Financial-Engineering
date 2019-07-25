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

	// Ask the user for the x- and y-coordinates.
	cout << "Please input x and y coordinates:" << endl;
	cin >> newX >> newY;

	// Create a Point object using the default constructor.
	Point pt;

	// Set the coordinates entered by the user.
	pt.SetX(newX);
	pt.SetY(newY);

	// Print the description of the point.
	cout << pt.ToString() << endl;

	// Print the point coordinates.
	cout << pt.GetX() << " " << pt.GetY() << endl;

	return 0;
}