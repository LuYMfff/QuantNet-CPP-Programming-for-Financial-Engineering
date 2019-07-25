//
//  main.cpp
//  C++ Certificate
//  Test program for the Point class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//



#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Point p(1.0, 1.0);
	// if (p == 1.0) cout << "Equal!" << endl;
	if (p == (Point)1.0) cout << "Equal!" << endl;
	else cout << "Not equal" << endl;

	return 0;
}