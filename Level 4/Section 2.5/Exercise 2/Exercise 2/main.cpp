//
//  main.cpp
//  C++ Certificate
//  Creating Array of Pointers.
//
//  Created by NELSON YEUNG on 7/5/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int size = 3;
	
	// Create an array of Point pointers with 3 elements on the heap.
	Point** pt_Array = new Point * [size];

	// Create for each element in the array a point on the heap.
	pt_Array[0] = new Point(0.0, 1.0);
	pt_Array[1] = new Point(0.0, 1.0);
	pt_Array[2] = new Point(0.0, 1.0);

	// Iterate the array and print each point in the array.
	for (int i = 0; i < size; i++)
	{
		cout << (*pt_Array[i]) << endl;
	}

	// Iterate the array again and delete each point in the array.
	for (int j = 0; j < size; j++)
	{
		delete pt_Array[j];
	}

	// Delete the array itself.
	delete[] pt_Array;

	return 0;
}