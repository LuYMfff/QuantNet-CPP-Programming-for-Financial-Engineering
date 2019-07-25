//
//  main.cpp
//  C++ Certificate
//  Static Variable for Array Default Size
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//
#include "Array.hpp"
#include <iostream>

using namespace std;
using namespace NELSON::Containers;

int main()
{
	Array<int> intArray1;
	Array<int> intArray2;
	Array<double> doubleArray;

	cout << intArray1.DefaultSize() << endl; // 10, the default sze.
	cout << intArray2.DefaultSize() << endl; // 10, the default sze.
	cout << doubleArray.DefaultSize() << endl; // 10, the default sze.

	intArray1.DefaultSize(15); // The default size of intArray1 is now set to 15.


	cout << intArray1.DefaultSize() << endl; // 15
	cout << intArray2.DefaultSize() << endl; // 15
	// Static data member is independent of any particular object of the class Array<int>,
	// If the default size of intArray1 is set to 15, the default size of intArray2 is also 15.
	
	cout << doubleArray.DefaultSize() << endl; // 10
	// doubleArray is an instance of class Array<double> rather than Array<int>.

	return 0;
}