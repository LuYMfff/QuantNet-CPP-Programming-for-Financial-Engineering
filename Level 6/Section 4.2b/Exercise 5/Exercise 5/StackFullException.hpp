//
//  StackFullException.hpp
//  C++ Certificate
//  Header file for the StackFullException class.
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef StackFullException_HPP
#define StackFullException_HPP

#include "StackException.hpp"
#include <sstream>
#include <iostream>
using namespace std;

class StackFullException : public StackException
{
public:
	StackFullException() : StackException() // Default constructor
	{
	}

	virtual ~StackFullException() // Destructor
	{
	}

	std::string GetMessage()
	{
		return "The stack is full.";
	}
};


#endif