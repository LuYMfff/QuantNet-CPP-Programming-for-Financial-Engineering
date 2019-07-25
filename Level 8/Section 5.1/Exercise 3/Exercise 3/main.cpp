//
//  main.cpp
//  C++ Certificate
//  Variant
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <boost/variant.hpp>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Visitor.hpp"
#include <iostream>

using namespace std;
using namespace NELSON::CAD;

// Create a typedef for a ShapeType variant that can contain a Point, Line or Circle.
typedef boost::variant<Point, Line, Circle> ShapeType;

// Create a function that returns the variant. 
// Within this function ask the user for the shape type to create.
// Then create the requested shape and assign it to the variant and return it.
ShapeType Create_shape()
{
	ShapeType shape;

	cout << "Please select a shape\n1: Point\n2: Line\n3: Circle\n";
	int selection;
	cin >> selection;

	switch (selection)
	{
	case 1:
		shape = Point();
		break;
	case 2:
		shape = Line();
		break;
	case 3:
		shape = Circle();
		break;
	default:
		break;
	}

	return shape;
}

int main()
{
	// Using declaration, for readability purposes
	using boost::variant;
	
	// Call the function and print the result by sending it to cout.
	ShapeType shape = Create_shape();
	cout << shape << endl;

	// Try to assign the variant to a Line variable by using the global boost:get<T>() function.
	try
	{
		Line ln = boost::get<Line>(shape);
	}
	catch (boost::bad_get & err)
	{
		cout << err.what() << endl;
	}

	// Create an instance of the visitor and use the boost::apply_visitor(visitor, variant) global function to move the shape.
	Visitor visitor(1.0, 1.0);
	boost::apply_visitor(visitor, shape);
	
	// Print the shape afterwards to check if the visitor indeed changed the coordinates.
	cout << shape << endl;

	return 0;
}
