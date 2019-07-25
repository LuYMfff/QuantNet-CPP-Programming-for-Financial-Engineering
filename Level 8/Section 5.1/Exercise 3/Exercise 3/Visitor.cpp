//
//  Visitor.cpp
//  C++ Certificate
//  Source file for the Visitor class.
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "Visitor.hpp"

namespace NELSON
{
	namespace CAD
	{
		Visitor::Visitor() : boost::static_visitor<void>(), m_dx(0.0), m_dy(0.0) // default constructor
		{
		}

		Visitor::Visitor(double x, double y) : boost::static_visitor<void>(), m_dx(x), m_dy(y) // constructor that accepts x- and y-coordinates
		{
		}

		Visitor::Visitor(const Visitor& visitor) : boost::static_visitor<void>(), m_dx(visitor.m_dx), m_dy(visitor.m_dy)// copy constructor
		{
		}

		Visitor::~Visitor() // destructor
		{
		}

		void Visitor::operator () (Point& p) const // changes the coordinates of Point
		{
			p.X(p.X() + m_dx);
			p.Y(p.Y() + m_dy);
		}

		void Visitor::operator () (Line& l) const // changes the coordinates of Line
		{
			l.Start(l.Start() + Point(m_dx, m_dy));
			l.End(l.End() + Point(m_dx, m_dy));
		}

		void Visitor::operator () (Circle& c) const // changes the coordinates of Circle
		{
			c.CenterPoint(c.CenterPoint() + Point(m_dx, m_dy));
		}
	}
}