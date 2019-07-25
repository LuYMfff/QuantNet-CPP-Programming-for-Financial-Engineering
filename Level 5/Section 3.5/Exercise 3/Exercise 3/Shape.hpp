//
//  Shape.hpp
//  C++ Certificate
//  Header file for the Shape class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//
#ifndef Shape_HPP
#define Shape_HPP

#include <iostream>
#include <stdlib.h>
#include <sstream>
using namespace std;

class Shape
{
private:
	int id;
public:
	Shape(); // default constructor
	Shape(const Shape& shape);	// copy constructor
	virtual ~Shape(); // destructor
	Shape& operator = (const Shape& shape); // assignment operator
	virtual std::string ToString() const; // function that returns the id as string e.g. “ID: 123”
	int ID() const; // function the retrieve the id of the shape.

};

#endif