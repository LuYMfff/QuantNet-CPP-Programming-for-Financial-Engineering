//
//  main.cpp
//  C++ Certificate
//  Test the Array class.
//
//  Created by NELSON YEUNG on 7/5/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include"array.hpp"
#include<iostream>

int main()
{
	Array test_array(6); // size constructor
	Array test_array2; // default constructor
	Array test_array4(test_array); // copy constructor

	Array test_array3;
	test_array3 = test_array; //test assignment operator

	for (int j = 0; j < test_array3.Size(); j++)
	{
		cout << test_array3[j] << endl;
	}

	cout << "2nd element of test_array3 is: " << test_array3.GetElement(2) << endl;

	Point p1(2, 3);
	test_array3.SetElement(2, p1);
	cout << "2nd element of test_array3 is now: " << test_array3.GetElement(2) << endl;

	cout << "7th non existent element of test_array3 is: " << test_array3.GetElement(9) << endl;

	cout << "3rd element of test_array4 is " << test_array4[3] << endl;

	test_array4[3] = p1;
	cout << "3rd element of test_array4 is now " << test_array4[3] << endl;

	cout << "9th non existent element of test_array4 is: " << test_array4[9] << endl;

	return 0;
}
