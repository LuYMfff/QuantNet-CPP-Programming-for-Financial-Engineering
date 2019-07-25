//
//  main.cpp
//  C++ Certificate
//  Test program for the Point class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include "Point.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double newX, newY;
	double rad;

	// Ask the user for the x- and y-coordinates of the center.
	cout << "Please input x and y coordinates of the center:" << endl;
	cin >> newX >> newY;

	// Ask the user for the radius.
	cout << "Please input radius" << endl;
	cin >> rad;

	// Create center object.
	Point center(newX, newY);

	// Create circle object.
	Circle circle(center, rad);

	cout << circle.ToString() << endl;

	return 0;
}