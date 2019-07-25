//
//  Point.cpp
//  C++ Certificate
//  Source file for the Point class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

namespace NELSON
{
	namespace CAD
	{
		Point::Point() // default constructor
		{
			cout << "A Point is constructed.\n";
		}

		Point::~Point() // destructor
		{
			cout << "A Point is destructed.\n";
		}

		Point::Point(const Point& pt) : x(pt.x), y(pt.y) // copy constructor
		{
			cout << "A Point is copied.\n" << endl;
		}

		Point::Point(double value_x, double value_y) : x(value_x), y(value_y) // constructor that accepts x- and y-coordinates
		{
			cout << "A Point is constructed accepting x- and y-coordinates.\n" << endl;
		}

		// Getter functions
		double Point::X() const
		{
			return x;
		}

		double Point::Y() const
		{
			return y;
		}

		void Point::X(double newX) //set a new x value
		{
			x = newX;
		}

		void Point::Y(double newY) //set a new y value
		{
			y = newY;
		}

		std::string Point::ToString() const
		{
			stringstream String; // create a stringstream variable
			String << "Point(" << x << ", " << y << ")"; // put into the String stream
			return String.str(); // return string from string buffer
		}

		double Point::Distance() const // Calculate the distance to the origin (0, 0)
		{
			double distance;
			distance = sqrt(x * x + y * y); //distance formula
			return distance;
		}

		double Point::Distance(const Point & pt) const //this uses another point to find the distance betwen this new point and current point
		{
			double xNew, yNew, distance2;
			xNew = pt.x; //get x coordinate of new Point
			yNew = pt.y; //get y coordinate of new Point

			/* pt.y = pt.x
			Change the value of y */

			distance2 = sqrt(pow((xNew - x), 2.0) + pow((yNew - y), 2.0)); //distance formula
			return distance2;
		}

		Point Point::operator - () const // Negate the coordinates.
		{
			return Point(-x, -y);
		}

		Point Point::operator * (double factor) const // Scale the coordinates.
		{
			return Point(factor * x, factor * y);
		}

		Point Point::operator + (const Point & p) const // Add coordinates.
		{
			return Point(p.x + x, p.y + y);
		}

		bool Point::operator == (const Point & p) const // Equally compare operator.
		{
			if (p.x == x && p.y == y)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		Point& Point::operator = (const Point & source) // Assignment operator.
		{
			x = source.x;
			y = source.y;

			return *this;
		}

		Point& Point::operator *= (double factor) // Scale the coordinates & assign.
		{
			Point temp = (*this) * factor;
			*this = temp;

			return *this;
		}

		ostream& operator << (ostream & os, const Point & p) // Send to ostream.
		{
			os << "Point(" << p.x << ", " << p.y << ")";
			return os;
		}
	}
}