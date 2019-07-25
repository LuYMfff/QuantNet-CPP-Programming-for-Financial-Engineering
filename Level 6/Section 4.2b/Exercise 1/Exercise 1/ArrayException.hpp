//
//  ArrayException.hpp
//  C++ Certificate
//  Header file for the ArrayException class.
//
//  Created by NELSON YEUNG on 9/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef ArrayException_HPP
#define ArrayException_HPP

#include <iostream>
using namespace std;

class ArrayException
{
public:
	ArrayException() // Default constructor
	{
	}

	virtual ~ArrayException() // Destructor
	{
	}

	virtual std::string GetMessage() = 0;
};

#endif