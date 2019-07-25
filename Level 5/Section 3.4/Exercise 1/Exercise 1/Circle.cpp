//
//  Circle.cpp
//  C++ Certificate
//  Source file for the Circle class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#define _USE_MATH_DEFINES
#include "Point.hpp"
#include "Circle.hpp"
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

namespace NELSON
{
	namespace CAD
	{
		Circle::Circle() : center(0.0, 0.0), radius(1.0) // Default constructor
		{
		}

		Circle::Circle(const Point& p, const double& r) : center(p), radius(r) // Constructor with a CenterPoint and Radius.
		{
		}

		Circle::Circle(const Circle& c) : center(c.center), radius(c.radius) // Copy constructor
		{
		}

		Circle::~Circle() // Deconstructor
		{
		}

		// Overloaded getters for the CenterPoint and Radius
		const Point& Circle::CenterPoint() const
		{
			return center;
		}
		const double& Circle::Radius() const
		{
			return radius;
		}

		// Overloaded setters for the CenterPoint and Radius.
		void Circle::CenterPoint(const Point& p)
		{
			center = p;
		}
		void Circle::Radius(const double& r)
		{
			radius = r;
		}

		double Circle::Diameter() const // Diameter
		{
			return (radius * 2.0);
		}

		double Circle::Area() const // Area
		{
			return (M_PI * radius * radius);
		}

		double Circle::Circumference() const // Circumferance
		{
			return (M_PI * radius * 2.0);
		}

		std::string Circle::ToString() const // String description of the Circle
		{
			stringstream String;
			String << "The center of this circle is: (" << center.X()
				<< ", " << center.Y() << "). Radius is: " << radius << "." << endl << "Area is: "
				<< Area() << "." << endl << "Circumference is: " << Circumference() << "." << endl
				<< "Diameter is: " << Diameter();;
			return String.str();
		}

		Circle& Circle::operator = (const Circle& source) // Assignment operator.
		{
			if (this == &source)
				return *this;

			center = source.center;
			radius = source.radius;

			return *this;
		}

		ostream& operator << (ostream & os, const Circle & c) // Send to ostream.
		{
			os << c.ToString();
			return os;
		}
	}
}