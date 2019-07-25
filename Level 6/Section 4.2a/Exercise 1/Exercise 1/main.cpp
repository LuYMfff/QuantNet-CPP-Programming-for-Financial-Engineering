//
//  main.cpp
//  C++ Certificate
//  Templated Array Class
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//
#include "Point.hpp"
#include "Array.hpp"
#include <iostream>

using namespace std;
using namespace NELSON::CAD;
using namespace NELSON::Containers;

int main()
{
	// default constructor
	Array<Point> array0(3);
	array0[0] = Point(0, 0);
	array0[1] = Point(1, 1);
	array0[2] = Point(2, 2);

	// constructor with size argument, assignment, [] 
	Array<Point> array1(3);
	array1 = array0;
	for (int i = 0; i < array1.Size(); i++)
	{
		cout << array1[i] << endl;
	}

	// copy constrcutor
	Array<Point> array2(array1);
	for (int i = 0; i < array2.Size(); i++)
	{
		cout << array2[i] << endl;
	}

	// size, setter and getter
	Array<Point> array3(6);
	for (int i = 0; i < array3.Size(); i++)
	{
		array3.SetElement(i, Point(i, i));
		cout << array3.GetElement(i) << "\n" << endl;
	}
	
	return 0;
}