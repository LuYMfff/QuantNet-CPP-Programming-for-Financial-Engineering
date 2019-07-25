//
//  Array.cpp
//  C++ Certificate
//  Source file for the PointArray class.
//
//  Created by NELSON YEUNG on 11/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef PointArray_CPP
#define PointArray_CPP

#include "Point.hpp"
#include "Array.hpp"
#include "PointArray.hpp"
using namespace std;

namespace NELSON
{
	namespace Containers
	{
		PointArray::PointArray() : Array() // default constructor
		{
		}

		PointArray::PointArray(int size) : Array(size) // constructor with size argument
		{
		}
		
		PointArray::PointArray(const PointArray& pointarray) : Array(pointarray) // copy constructor
		{
		}

		PointArray::~PointArray() // destructor
		{
		}

		PointArray& PointArray::operator = (const PointArray& pointarray) // assignment operator
		{
			if (this == &pointarray) //exit if same object
			{
				return *this;
			}

			Array<Point>::operator = (pointarray);
			return *this;
		}

		double PointArray::Length() const // function that returns the total length between the points in the array.
		{
			double length = 0.0;

			for (int i = 0; i < Array<Point>::Size() - 1; i++)
			{
				length += ((*this)[i]).Distance((*this)[i+1]);
			}

			return length;
		}
	}
}
#endif


