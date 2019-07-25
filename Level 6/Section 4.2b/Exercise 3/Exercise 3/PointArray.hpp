//
//  Array.hpp
//  C++ Certificate
//  Header file for the PointArray class.
//
//  Created by NELSON YEUNG on 11/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef PointArray_HPP
#define PointArray_HPP

#include "Point.hpp"
#include "Array.hpp"

using namespace std;
using namespace NELSON::CAD;

namespace NELSON
{
	namespace Containers
	{
		class PointArray : public Array<Point>
		{
		public:
			PointArray(); // default constructor
			PointArray(int size); // constructor with size argument
			PointArray(const PointArray& pointarray); // copy constructor
			virtual ~PointArray(); // destructor

			PointArray& operator = (const PointArray& pointarray); // assignment operator
			
			double Length() const; // function that returns the total length between the points in the array.
		};
	}
}

#endif