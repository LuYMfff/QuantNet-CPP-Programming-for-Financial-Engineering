//
//  Point.hpp
//  C++ Certificate
//  Header file for the Point class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef Point_HPP
#define Point_HPP

#include "Shape.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace NELSON
{
	namespace CAD
	{
		class Point : public Shape
		{
		private:
			double x; // x coordinate
			double y; // y coordinate

		public:
			Point(); // default constructor

			~Point(); // destructor

			Point(const Point& pt); // copy constructor

			explicit Point(double value_x);

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

			Point operator - () const; // Negate the coordinates.
			Point operator * (double factor) const; // Scale the coordinates.
			Point operator + (const Point& p) const; // Add coordinates.
			bool operator == (const Point& p) const; // Equally compare operator.
			Point& operator = (const Point& source); // Assignment operator.
			Point& operator *= (double factor); // Scale the coordinates & assign.

			friend ostream& operator << (ostream& os, const Point& p); // Send to ostream.
		};
	}
}

#endif