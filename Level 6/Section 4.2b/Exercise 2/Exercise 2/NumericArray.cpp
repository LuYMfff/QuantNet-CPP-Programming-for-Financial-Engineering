//
//  NumericArray.cpp
//  C++ Certificate
//  Source file for the NumericArray class.
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef NumericArray_CPP
#define NumericArray_CPP

#include "NumericArray.hpp"
#include "NumericArrayException.hpp"

namespace NELSON
{
	namespace Containers
	{
		template <class T>
		NumericArray<T>::NumericArray() : Array<T>::Array() // default constructor
		{
		}

		template <class T>
		NumericArray<T>::NumericArray(int size) : Array<T>::Array(size)	// constructor with size argument
		{
		}

		template <class T>
		NumericArray<T>::NumericArray(const NumericArray<T>& array) : Array<T>::Array(array) // copy constructor
		{
		}

		template <class T>
		NumericArray<T>::~NumericArray() // destructor
		{
		}

		template <class T>
		NumericArray<T>& NumericArray<T>::operator = (const NumericArray<T>& array) // assignment operator
		{
			if (this == &array) //exit if same object
			{
				return *this;
			}

			Array<T>::operator = (array);
			return *this;
		}


		template <class T>
		NumericArray<T> NumericArray<T>::operator * (const T& factor) const // operator to scale elements by a factor    
		{
			NumericArray<T> result(*this);

			for (int i = 0; i < Array<T>::Size(); i++)
			{
				result[i] *= factor;
			}

			return result;
		}

		template <class T>
		NumericArray<T> NumericArray<T>::operator + (const NumericArray<T>& array) // operator to add numeric arrays
		{
			if (Array<T>::Size() != array.Size())
			{
				throw NumericArrayException();
			}

			NumericArray<T> result(*this);

			for (int i = 0; i < result.Size(); i++)
			{
				result[i] += array[i];
			}

			return result;
		}

		template <class T>
		T& NumericArray<T>::Dot(NumericArray<T>& array) //dot product function
		{
			if (Array<T>::Size() != array.Size())
			{
				throw NumericArrayException();
			}

			T result(0);

			for (int i = 0; i < (Array<T>::Size()); i++)
			{
				result += array[i] * (*this)[i];
			}

			return result;
		}
	}
}

#endif

