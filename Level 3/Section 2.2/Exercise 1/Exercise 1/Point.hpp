//
//  Point.hpp
//  C++ Certificate
//  Header file for the Point class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#ifndef point_HPP
#define point_HPP

#include<iostream>
#include<string>
using namespace std;

class Point
{
private:
	double x; // x coordinate
	double y; // y coordinate

public:
	Point(); // default constructor

	~Point(); // destructor

	// Getter functions
	double GetX();
	double GetY();

	// Settter functions
	void SetX(double newx);
	void SetY(double newy);

	// String description of the point
	std::string ToString() const;

};
#endif