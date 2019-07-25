//
//  OutOfBoundsException.hpp
//  C++ Certificate
//  Header file for the OutOfBoundsException class.
//
//  Created by NELSON YEUNG on 9/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef OutOfBoundsException_HPP
#define OutOfBoundsException_HPP

#include "ArrayException.hpp"
#include <sstream>
#include <iostream>
using namespace std;

class OutOfBoundsException : public ArrayException
{
private:
	int m_index;

public:
	OutOfBoundsException() : ArrayException() // Default constructor
	{ 
	}

	OutOfBoundsException(int index) : ArrayException() // Constructor that acccepts an erroneous array index
	{ 
		m_index = index;
	}

	virtual ~OutOfBoundsException() // Destructor
	{ 
	}

	std::string GetMessage()
	{
		return "The index is out of bounds.";
	}
};


#endif