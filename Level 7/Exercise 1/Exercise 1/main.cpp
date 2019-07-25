//
//  main.cpp
//  C++ Certificate
//  STL Containers
//
//  Created by NELSON YEUNG on 25/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <list>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int main()
{
	// Create a list of doubles and add some data.
	list<double> list1;
	for (double i = 0; i < 10; i++)
	{
		list1.push_back(i);
	}

	cout << "The first element of the list: " << list1.front() << endl;
	cout << "the last element of the list: " << list1.back() << endl;

	// Create a vector of doubles and add some data.
	vector<double> vector1;
	for (int i = 0; i < 10; i++)
	{
		vector1.push_back(i);
	}

	cout << "The first element of the vector: " << vector1[0] << endl;
	cout << "the last element of the vector: " << vector1[vector1.size() - 1] << endl;

	// Create a map that maps strings to doubles. 
	map<string, double> map1;
	string str[5] = { "zero", "one", "two", "three", "four"};

	for (int i = 0; i < 5; i++)
	{
		map1[str[i]] = i;
	}

	cout << "The first element of the map: " << map1["zero"] << endl;
	cout << "the last element of the map: " << map1["four"] << endl;

	return 0;
}