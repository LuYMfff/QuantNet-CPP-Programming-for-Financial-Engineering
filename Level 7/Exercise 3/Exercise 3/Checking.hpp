//
//  Checking.hpp
//  C++ Certificate
//  Header file for the Checking class.
//
//  Created by NELSON YEUNG on 25/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//
#ifndef Checking_HPP
#define Checking_HPP

#include <iostream>
using namespace std;

class Checking
{
private:
	double val;
public:
	Checking(); // default constructor
	Checking(double v); // constructor with parameter
	Checking(const Checking& check); // copy constructor
	~Checking(); // destructor

	Checking& operator = (const Checking& check); // assignment operator
	bool operator () (double num);
};

#endif