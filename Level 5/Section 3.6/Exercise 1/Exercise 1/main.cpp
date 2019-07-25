//
//  main.cpp
//  C++ Certificate
//  Bounds Checking Array
//
//  Created by NELSON YEUNG on 7/5/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//


#include "Point.hpp"
#include "Array.hpp"
#include <iostream>

using namespace std;
using namespace NELSON::CAD;
using namespace NELSON::Containers;

int main()
{
	Array array(5); //create an array
	// cout << array.GetElement(10) << endl; // An exception is thrown.

	try
	{
		cout << array.GetElement(10) << endl; // The error message appears.
	}
	catch (int err)
	{
		if (err == -1) cout << "The index is out of bounds." << endl;
	}
	catch (...)
	{
		cout << "An unhandled exception has occured" << endl;
	}
	return 0;
}