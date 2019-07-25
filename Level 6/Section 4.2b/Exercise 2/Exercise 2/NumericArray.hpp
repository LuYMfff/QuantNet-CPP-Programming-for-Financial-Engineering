//
//  NumericArray.hpp
//  C++ Certificate
//  Header file for the NumericArray class.
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef NumericArray_HPP
#define NumericArray_HPP

#include "Array.cpp"
#include "Array.hpp"

namespace NELSON
{
	namespace Containers
	{
		template <typename T>
		class NumericArray : public Array<T>
		{
		public:
			NumericArray(); // default constructor
			NumericArray(int size);	// constructor with size argument
			NumericArray(const NumericArray<T>& array); // copy constructor
			virtual ~NumericArray(); // destructor

			NumericArray<T>& operator = (const NumericArray<T>& array); // assignment operator
			NumericArray<T> operator * (const T& factor) const; // operator to scale elements by a factor    
			NumericArray<T> operator + (const NumericArray<T>& array); // operator to add numeric arrays

			T& Dot(NumericArray<T>& array); //dot product function
		};
	}
}

#endif

