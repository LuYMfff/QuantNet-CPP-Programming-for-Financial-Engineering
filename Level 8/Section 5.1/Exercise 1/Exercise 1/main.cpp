//
//  main.cpp
//  C++ Certificate
//  Smart Pointers
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include <boost/shared_ptr.hpp>

using namespace std;
using namespace NELSON::CAD;
using namespace NELSON::Containers;

int main()
{
	typedef boost::shared_ptr<Shape> ShapePtr;
	typedef Array<ShapePtr> ShapeArray;

	ShapePtr shape1(new Point(0.0, 0.0));
	ShapePtr shape2(new Line(Point(0.0, 0.0), Point(1.0, 1.0)));
	ShapePtr shape3(new Circle(Point(0.0, 0.0), 1.0));

	cout << "The first pointer has been used: " << shape1.use_count() << endl;
	cout << "The second pointer has been used: " << shape2.use_count() << endl;
	cout << "The third pointer has been used: " << shape3.use_count() << endl;

	{
		// Create an array with shared pointers for shapes.
		ShapeArray array1(3);

		// Fill it with various shapes and print them.
		array1[0] = shape1;
		array1[1] = shape2;
		array1[2] = shape3;

		for (int i = 0; i != 3; ++i)
		{
			(*array1[i]).Print();
		}

		cout << "The first pointer has been used: " << shape1.use_count() << endl;
		cout << "The second pointer has been used: " << shape2.use_count() << endl;
		cout << "The third pointer has been used: " << shape3.use_count() << endl;
	}

	// Check if the shapes are automatically deleted.
	cout << "The first pointer has been used: " << shape1.use_count() << endl;
	cout << "The second pointer has been used: " << shape2.use_count() << endl;
	cout << "The third pointer has been used: " << shape3.use_count() << endl;

	return 0;
}