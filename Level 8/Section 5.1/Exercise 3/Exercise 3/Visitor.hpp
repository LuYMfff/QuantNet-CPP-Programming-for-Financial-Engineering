//
//  Shape.hpp
//  C++ Certificate
//  Header file for the Visitor class.
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//
#ifndef Visitor_HPP
#define Visitor_HPP

#include <boost/variant.hpp>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"

namespace NELSON
{
	namespace CAD
	{
		class Visitor : public boost::static_visitor<void>
		{
		private:
			double m_dx;
			double m_dy;
		public:
			Visitor(); // default constructor
			Visitor(double x, double y); // constructor that accepts x- and y-coordinates
			Visitor(const Visitor& visitor); // copy constructor
			~Visitor(); // destructor

			void operator () (Point& p) const; // changes the coordinates of Point
			void operator () (Line& l) const; // changes the coordinates of Line
			void operator () (Circle& c) const; // changes the coordinates of Circle
		};
	}
}


#endif