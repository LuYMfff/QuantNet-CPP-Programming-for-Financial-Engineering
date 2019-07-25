//
//  main.cpp
//  C++ Certificate
//  Tuple
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "boost/tuple/tuple.hpp"
#include "boost/tuple/tuple_io.hpp"
#include <string>
#include <iostream>

using namespace std;

// Create a function that prints the person tuple. 
void Print(const boost::tuple<string, int, double>& person)
{
	cout << "Name: " << person.get<0>() << ".\nAge: " << person.get<1>() << ".\nLength: " << person.get<2>() << ".\n";
}

int main()
{
	// Using declaration, for readability purposes
	using boost::tuple;
	
	// Create a typedef for a Person tuple that contains a name, age and height. 
	typedef boost::tuple<string, int, double> Person;

	// Create a few person tuple instances and print them.
	Person Amy = boost::make_tuple("Amy", 15, 150.0);
	Person Ben = boost::make_tuple("Ben", 18, 180.0);

	Print(Amy);
	Print(Ben);

	// Increment the age of one of the persons.
	Ben.get<1>() += 1;
	cout << "Age of " << Ben.get<0>() << " after incremented by 1: " << Ben.get<1>() << ".\n";

	return 0;
}