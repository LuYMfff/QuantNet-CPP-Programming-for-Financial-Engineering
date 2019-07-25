//
//  ArrayException.hpp
//  C++ Certificate
//  Header file for the StackException class.
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef StackException_HPP
#define StackException_HPP

#include <iostream>
using namespace std;

class StackException
{
public:
	StackException() // Default constructor
	{
	}

	virtual ~StackException() // Destructor
	{
	}

	virtual std::string GetMessage() = 0;
};

#endif