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

	Point(const Point& pt); // copy constructor

	Point(double value_x, double value_y); // constructor that accepts x- and y-coordinates

	// Getter functions
	double X() const;
	double Y() const;

	// Settter functions
	void X(double newx);
	void Y(double newy);

	// String description of the point
	std::string ToString() const;

	double Distance() const; // Calculate the distance to the origin (0, 0)
	double Distance(const Point& pt) const; // Calculate the distance between two points.

};

class Point
{
public:
	Point();
	~Point();
};
#endif