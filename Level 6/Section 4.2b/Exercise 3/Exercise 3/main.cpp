//
//  main.cpp
//  C++ Certificate
//  Point Array (concrete inheritance)
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//
#include "Point.hpp"
#include "Array.hpp"
#include "PointArray.hpp"
#include <iostream>

using namespace std;
using namespace NELSON::CAD;
using namespace NELSON::Containers;

int main()
{
	PointArray array(10);		// Created arry with x number of  elements.

	for (int i = 0; i < 10; i++)
	{
		array[i] = Point(i, i);
	}

	cout << "The total length between points in the array : " << array.Length() << endl; // 9 * sqrt(2)

	return 0;
}