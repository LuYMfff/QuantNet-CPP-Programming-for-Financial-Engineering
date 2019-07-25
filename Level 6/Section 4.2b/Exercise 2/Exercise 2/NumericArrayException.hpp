//
//  OutOfBoundsException.hpp
//  C++ Certificate
//  Header file for the NumericArrayException class.
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef NumericArrayException_HPP
#define NumericArrayException_HPP

#include "ArrayException.hpp"
#include <sstream>
#include <iostream>
using namespace std;

class NumericArrayException : public ArrayException
{
public:
	NumericArrayException() : ArrayException() // Default constructor
	{
	}

	virtual ~NumericArrayException() // Destructor
	{
	}

	std::string GetMessage()
	{
		return "The two arrays are of incompatible sizes.";
	}
};


#endif