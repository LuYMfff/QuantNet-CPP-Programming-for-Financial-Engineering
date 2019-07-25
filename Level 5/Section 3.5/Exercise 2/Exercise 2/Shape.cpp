﻿//
//  Shape.cpp
//  C++ Certificate
//  Source file for the Shape class.
//
//  Created by NELSON YEUNG on 9/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "Shape.hpp"
#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;

Shape::Shape() : id(std::rand()) // default constructor
{
}

Shape::Shape(const Shape& shape) : id(shape.id) // copy constructor
{
}

Shape::~Shape() // destructor
{
}

Shape& Shape::operator = (const Shape& shape) // assignment operator
{
	if (this == &shape) return *this;
	id = shape.id;
	return *this;
}

std::string Shape::ToString() const // function that returns the id as string e.g. “ID: 123”
{
	stringstream String; //create stringstream variable
	String << "ID: " << id << endl;
	return String.str();
}

int Shape::ID() const // function the retrieve the id of the shape
{
	return id;
}