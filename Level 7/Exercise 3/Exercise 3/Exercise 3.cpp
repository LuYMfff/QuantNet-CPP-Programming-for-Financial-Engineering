//
//  main.cpp
//  C++ Certificate
//  STL Algorithms
//
//  Created by NELSON YEUNG on 25/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <list>
#include <algorithm>
#include <iostream>
#include "Checking.hpp"

using namespace std;

bool Check(double input)
{
	const double bound = 10.0;
	return input < bound;
}

int main()
{
	// Create a list of doubles and add some data.
	list<double> list1;
	for (double i = 0; i < 10; i++)
	{
		list1.push_back(i);
	}

	// Use the count_if algorithm to count the number of elements smaller than a certain number. 
	cout << "Number of elements that are less than 10: " << count_if(list1.begin(), list1.end(), Check) << endl;

	// Replace the global checking function, by a function object.
	double bound = 10.0;
	cout << "Number of elements that are less than " << bound << ": " << count_if(list1.begin(), list1.end(), Checking(bound)) << endl;

	return 0;
}