//
//  StackEmptyException.hpp
//  C++ Certificate
//  Header file for the StackEmptyException class.
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef StackEmptyException_HPP
#define StackEmptyException_HPP

#include "StackException.hpp"
#include <sstream>
#include <iostream>
using namespace std;

class StackEmptyException : public StackException
{
public:
	StackEmptyException() : StackException() // Default constructor
	{
	}

	virtual ~StackEmptyException() // Destructor
	{
	}

	std::string GetMessage()
	{
		return "The stack is empty.";
	}
};


#endif