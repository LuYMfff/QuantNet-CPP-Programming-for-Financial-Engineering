//
//  main.cpp
//  C++ Certificate
//  Abstract Functions
//
//  Created by NELSON YEUNG on 9/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Shape.hpp"
#include <iostream>

using namespace std;
using namespace NELSON::CAD;

int main()
{
	Shape* shapes[3];
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Line(Point(1.0, 2.5), Point(3.4, 5.2));
	for (int i = 0; i != 3; i++) shapes[i]->Draw();
	for (int i = 0; i != 3; i++) delete shapes[i];
	// Only destructor in the base class will be called if the destructor in the base class is not declared virtual.
	// After the destructor is declared virtual in the base class, the derived class destructors can now be called.

	// Shape sp; // Cannot instantiate abstract class.

	return 0;
}	