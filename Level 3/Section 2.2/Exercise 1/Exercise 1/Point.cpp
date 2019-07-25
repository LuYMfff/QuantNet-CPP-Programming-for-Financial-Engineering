//
//  Point.cpp
//  C++ Certificate
//  Source file for the Point class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include "Point.hpp"
#include <iostream>
#include <sstream>
using namespace std;

Point::Point() // default constructor
{
}

Point::~Point() // destructor
{
}

// Getter functions
double Point::GetX()
{
	return x;
}

double Point::GetY()
{
	return y;
}

void Point::SetX(double newX) //set a new x value
{
	x = newX;
}

void Point::SetY(double newY) //set a new y value
{
	y = newY;
}

std::string Point::ToString() const
{
	stringstream String; // create a stringstream variable
	String << "Point(" << x << ", " << y << ")"; // put into the String stream
	return String.str(); // return string from string buffer
}