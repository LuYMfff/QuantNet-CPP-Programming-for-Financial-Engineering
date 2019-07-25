//
//  main.cpp
//  C++ Certificate
//  Numeric Array (generic inheritance)
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "NumericArray.cpp"
#include "Array.cpp"
#include "ArrayException.hpp"
#include <iostream>
using namespace std;
using namespace NELSON::Containers;

int main()
{
	// Default constructor.
	NumericArray<int> array1;
	cout << "NumericArray1: " << endl << "size = " << array1.Size() << endl;

	// Constructor with size as input.
	NumericArray<int> array2(3);
	array2[0] = 0;
	array2[1] = 1;
	array2[2] = 2;
	cout << "NumericArray2: " << endl << array2[0] << "," << array2[1] << "," << array2[2] << endl;

	// Copy constructor.
	NumericArray<int> array3(array2);
	cout << "NumericArray3: " << endl << array3[0] << "," << array3[1] << "," << array3[2] << endl;

	// Assignment operator.
	NumericArray<int> array4 = array2;
	cout << "NumericArray4: " << endl;
	for (int i = 0; i < array4.Size(); i++)
	{
		cout << array4[i] << endl;
	}

	// * operator.
	NumericArray<int> array5 = array3 * 3;
	cout << "NumericArray5: " << endl;
	for (int i = 0; i < array5.Size(); i++)
	{
		cout << array5[i] << endl;
	}

	// + operator and case with incompatible size.
	NumericArray<int> array6(2);
	array6 = array2 + array3;
	cout << "NumericArray6: " << endl;
	for (int i = 0; i < array6.Size(); i++)
	{
		cout << array6[i] << endl;
	}

	NumericArray<int> array7;
	cout << "NumericArray7: " << endl;

	try
	{
		array7 = array2 + array1;
	}
	catch (ArrayException & ae)
	{
		cout << ae.GetMessage() << endl;
	}

	// Dot product and case with incompatible size.
	int dot_product8;
	dot_product8 = array2.Dot(array3);
	cout << "dot_product8: " << dot_product8 << endl;

	int dot_product9;
	cout << "dot_product9: " << endl;

	try
	{
		dot_product9 = array2.Dot(array1);
	}
	catch (ArrayException & ae)
	{
		cout << ae.GetMessage() << endl;
	}

	return 0;
}

// We assume the type used as template argument should support +, * and dot product.
// We can create a numeric array with Point objects 
// but we cannot perform any operations as they are missing in the Point class.
