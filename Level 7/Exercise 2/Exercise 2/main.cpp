//
//  main.cpp
//  C++ Certificate
//  STL Iterators
//
//  Created by NELSON YEUNG on 25/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <list>
#include <vector>
#include <map>
#include <iterator>
#include <iostream>

using namespace std;

// Function that accepts the template argument T as input and returns a double.
template <class T>
double Sum(const T& container)
{
	double result = 0.0;
	typename T::const_iterator i;
	for (i = container.begin(); i != container.end(); ++i)
	{
		result += *i;
	}

	return result;
}

// Function that calculates the sum of all values between two passed-in iterators.
template <class T>
double Sum(const typename T::const_iterator& start, const typename T::const_iterator& end)
{
	double result = 0.0;
	typename T::const_iterator i;
	for (i = start; i != end; ++i)
	{
		result += *i;
	}

	return result;
}

// Function that accepts the template map as input and returns a double.
template <class T, class T2>
double Sum(const map<T, T2>& sum)
{
	double result = 0.0;
	typename map<T, T2>::const_iterator i;
	for (i = sum.begin(); i != sum.end(); ++i)
	{
		result += (i->second);
	}

	return result;
}

// Function that calculates the sum of all values between two passed-in iterators of a map.
template <typename T, typename T2>
double Sum(const typename map<T, T2>::const_iterator& start, const typename map<T, T2>::const_iterator& end)
{
	double result = 0.0;
	typename map<T, T2>::const_iterator i;
	for (i = start; i != end; ++i)
	{
		result += (i->second);
	}

	return result;
}


int main()
{
	// Create a list of doubles and add some data.
	list<double> list1;
	for (double i = 0; i < 10; i++)
	{
		list1.push_back(i);
	}

	cout << "Sum of list is: " << Sum(list1) << endl;
	cout << "Sum of list from start to end is: " << Sum<list<double>>(list1.begin(), list1.end()) << endl;
	
	// Create a vector of doubles and add some data.
	vector<double> vector1;
	for (int i = 0; i < 10; i++)
	{
		vector1.push_back(i);
	}

	cout << "Sum of vector is: " << Sum(vector1) << endl;
	cout << "Sum of vector from start to end is: " << Sum<vector<double>>(vector1.begin(), vector1.end()) << endl;

	// Create a map that maps strings to doubles. 
	map<string, double> map1;
	string str[5] = { "zero", "one", "two", "three", "four" };

	for (int i = 0; i < 5; i++)
	{
		map1[str[i]] = i;
	}

	cout << "Sum of map is: " << Sum(map1) << endl;
	cout << "Sum of map from start to end is: " << Sum<string, double>(map1.begin(), map1.end()) << endl;


	return 0;
}