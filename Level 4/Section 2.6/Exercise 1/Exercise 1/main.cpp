//
//  main.cpp
//  C++ Certificate
//  CAD and Container Namespaces
//
//  Created by NELSON YEUNG on 7/5/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//


#include "Point.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include "Line.hpp"
#include <iostream>

using namespace std;
using namespace NELSON::CAD;
using namespace NELSON::Containers;

int main()
{
	// Full namespace for point class
	NELSON::CAD::Point pt(1.0, 2.0);
	NELSON::CAD::Point p2(3.0, 4.0);
	cout << pt << endl;

	// Declaration for using single class
	Line ln(pt, p2);
	cout << ln << endl;

	// Declaration for complete namespace (containers)
	NELSON::Containers::Array a;
	cout << a[3] << endl;

	// Create shorter alias for Inna::CAD namespace
	namespace alias = NELSON::CAD;
	alias::Circle circle;
	cout << circle << endl;
	return 0;
}