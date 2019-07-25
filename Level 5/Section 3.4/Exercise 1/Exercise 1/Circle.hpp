//
//  Circle.hpp
//  C++ Certificate
//  Header file for the Circle class.
//
//  Created by NELSON YEUNG on 30/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef Circle_HPP
#define Circle_HPP

#include"Point.hpp"
#include<iostream>
#include<string>
using namespace std;

namespace NELSON
{
	namespace CAD
	{

		class Circle
		{
		private:
			Point center; // center
			double radius; // radius

		public:
			Circle(); // Default constructor

			Circle(const Point& p, const double& r); // Constructor with a CenterPoint and Radius.

			Circle(const Circle& c); // Copy constructor

			~Circle(); // Deconstructor

			// Overloaded getters for the CenterPoint and Radius
			const Point& CenterPoint() const;
			const double& Radius() const;

			// Overloaded getters for the CenterPoint and Radius.
			void CenterPoint(const Point& p);
			void Radius(const double& r);

			double Diameter() const; // Diameter

			double Area() const; // Area

			double Circumference() const; // Circumferance

			std::string ToString() const; // String description of the Circle

			Circle& operator = (const Circle& source); // Assignment operator.

			friend ostream& operator << (ostream& os, const Circle& c); // Send to ostream.
		};

	}
}

#endif