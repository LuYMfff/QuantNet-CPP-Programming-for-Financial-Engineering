//
//  main.cpp
//  C++ Certificate
//  Colon Syntax
//
//  Created by NELSON YEUNG on 9/5/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//


#include "Point.hpp"
#include "Circle.hpp"
#include "Line.hpp"
#include <iostream>

using namespace std;
using namespace NELSON::CAD;

int main()
{
	Line l;

	/*
	Before applying the colon syntax:
	constructor calls: 4 (2 default and 2 accepting x- and y- coordinates)
	destructor calls: 4
	assignment calls: 2
	
	After applying the colon syntax:
	constructor calls: 2 (0 default and 2 accepting x- and y- coordinates)
	destructor calls: 2
	assignment calls: 0
	*/

	return 0;
}