//
//  Checking.cpp
//  C++ Certificate
//  Source file for the Checking class.
//
//  Created by NELSON YEUNG on 25/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "Checking.hpp"
using namespace std;

Checking::Checking() : val(0.0) // default constructor
{
}

Checking::Checking(double v) : val(v) // constructor with parameter
{
}

Checking::Checking(const Checking& check) : val(check.val) // copy constructor
{
}

Checking::~Checking() // destructor
{
}

Checking& Checking::operator = (const Checking& check) // assignment operator
{
	if (this == &check) return *this;
	val = check.val;
}

bool Checking::operator () (double num)
{
	return (num < val);
}