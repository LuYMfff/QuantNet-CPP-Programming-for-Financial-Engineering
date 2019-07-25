//
//  Line.hpp
//  C++ Certificate
//  Header file for the Line class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#ifndef Line_HPP
#define Line_HPP

#include "Point.hpp"
#include<iostream>
#include<string>
using namespace std;

class Line
{
private:
	Point StartPoint;
	Point EndPoint;

public:
	Line(); // Default constructor 

	Line(const Point& pt1, const Point& pt2); //Constructor with a start- and end-point

	Line(const Line& ln); // Copy constructor

	~Line(); //Destructor

	// Overloaded getters for the start- and end-point
	const Point& Start() const;
	const Point& End() const;

	// Overloaded setters for the start- and end-point
	void Start(const Point& pt);
	void End(const Point& pt);

	std::string ToString() const; // Return a description of the line
	double Length() const; // Return a description of the line

	Line& operator = (const Line& source); // Assignment operator.
};

ostream& operator << (ostream& os, const Line& l); // Send to ostream.
#endif