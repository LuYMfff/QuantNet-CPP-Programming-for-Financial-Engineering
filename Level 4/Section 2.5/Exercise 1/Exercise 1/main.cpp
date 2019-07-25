//
//  main.cpp
//  C++ Certificate
//  Dynamically Creating Objects.
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

	// Create Point objects on the heap with new:
	Point* pt;
	Point* pt2;
	Point* pt3;
	pt = new Point; // default constructor
	pt2 = new Point(2, 3); // constructor with coordinates
	pt3 = new Point(*pt); // copy constructor

	cout << "pt: " << *pt << endl;
	cout << "pt2: " << *pt2 << endl;
	cout << "pt3: " << *pt3 << endl;

	// Dereference the pointer and send it to cout.
	cout << "Distance between Point 1 and Point 3 is " << (*pt).Distance(*pt3) << endl;

	// Delete the object created with new.
	delete pt;
	delete pt2;
	delete pt3;

	// Create an array of points.
	int n;
	cout << "Please enter the size of the array" << endl;
	cin >> n;

	// Point pt_Array[n]; // A compile error.
	
	// Create the array on the heap using new.
	Point* pt_Array = new Point[n];
	delete[] pt_Array;

	return 0;

}