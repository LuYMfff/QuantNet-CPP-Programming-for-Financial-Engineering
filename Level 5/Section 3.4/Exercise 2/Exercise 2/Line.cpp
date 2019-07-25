//
//  Line.cpp
//  C++ Certificate
//  Source file for the Line class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "Line.hpp"
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;
namespace NELSON
{
	namespace CAD
	{
		Line::Line() : StartPoint(0.0, 0.0), EndPoint(0.0, 0.0), Shape() // Default constructor
		{
		}

		Line::Line(const Point& pt1, const Point& pt2) : StartPoint(pt1), EndPoint(pt2), Shape() //Constructor with a start- and end-point
		{
		}

		Line::Line(const Line& ln) : StartPoint(ln.StartPoint), EndPoint(ln.EndPoint), Shape(ln) // Copy constructor
		{
		}

		Line::~Line() //Destructor
		{
		}

		// Overloaded getters for the start- and end-point
		const Point& Line::Start() const
		{
			return StartPoint;
		}
		const Point& Line::End() const
		{
			return EndPoint;
		}

		// Overloaded setters for the start- and end-point
		void Line::Start(const Point& pt)
		{
			StartPoint = pt;
		}
		void Line::End(const Point& pt)
		{
			EndPoint = pt;
		}

		std::string Line::ToString() const // Return a description of the line
		{
			stringstream String; //create stringstream variable
			String << "Start Point of line is: " << StartPoint.ToString() << ".\nEnd Point of line is: " << EndPoint.ToString() << ".\n";
			return String.str();
		}

		double Line::Length() const // Return a description of the line
		{
			double length;
			length = StartPoint.Distance(EndPoint);
			return length;
		}

		Line& Line::operator = (const Line& source) // Assignment operator.
		{
			if (this == &source)
				return *this;

			StartPoint = source.StartPoint;
			EndPoint = source.EndPoint;

			return *this;
		}

		ostream& operator << (ostream & os, const Line & l) // Send to ostream.
		{
			os << "Start Point of line is: " << l.StartPoint << ".\nEnd Point of line is: " << l.EndPoint << ".\n";
			return os;
		}
	}
}