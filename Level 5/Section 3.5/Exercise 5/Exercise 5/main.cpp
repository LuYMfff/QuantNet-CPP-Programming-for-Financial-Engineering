//
//  main.cpp
//  C++ Certificate
//  Template Method Pattern
//
//  Created by NELSON YEUNG on 9/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <iostream>
#include <sstream>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"

using namespace std;
using namespace NELSON::CAD;

int main()
{
	Point p(10, 20); // Create point.
	Line l(Point(1, 2), Point(3, 4)); // Create line.

	p.Print(); // Print a Point.
	l.Print(); // Print a Line.
	// it prints the right information even when point and line do not have the Print() function.

	return 0;
}