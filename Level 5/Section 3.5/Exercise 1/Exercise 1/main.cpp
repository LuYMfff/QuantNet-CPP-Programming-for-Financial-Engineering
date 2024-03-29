﻿//
//  main.cpp
//  C++ Certificate
//  Polymorphic ToString() Function
//
//  Created by NELSON YEUNG on 9/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//


#include "Point.hpp"
#include "Line.hpp"
#include "Shape.hpp"
#include <iostream>

using namespace std;
using namespace NELSON::CAD;

int main()
{
	Shape s; // Create shape.
	Point p(10, 20); // Create point.
	Line l(Point(1, 2), Point(3, 4)); // Create line.

	cout << s.ToString() << endl; // Print shape.
	cout << p.ToString() << endl; // Print point.
	cout << l.ToString() << endl; // Print line

	cout << "Shape ID: " << s.ID() << endl; // ID of the shape.
	cout << "Point ID: " << p.ID() << endl; // ID of the point. Does this work? Yes.
	cout << "Line ID: " << l.ID() << endl; // ID of the line. Does this work? Yes.

	Shape* sp; // Create pointer to a shape variable.
	sp = &p; // Point in a shape variable. Possible? Yes.
	cout << sp->ToString() << endl; // What is printed? Point(10,20)

	// Create and copy Point p to new point.
	Point p2;
	p2 = p;
	cout << p2 << ", " << p2.ID() << endl; // Is the ID copied if you do not call the base class assignment in point? No.

	return 0;
}