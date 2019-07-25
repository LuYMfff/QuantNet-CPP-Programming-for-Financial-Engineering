//
//  Array.cpp
//  C++ Certificate
//  Source file for the Array class.
//
//  Created by NELSON YEUNG on 7/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef Array_CPP
#define Array_CPP

#include "Array.hpp"
#include "OutOfBoundsException.hpp"
using namespace std;

namespace NELSON
{
	namespace Containers
	{
		template <class T>
		int Array<T>::m_default_data = 10; // initialise the static data member
		
		template <class T>
		Array<T>::Array() : m_data(new T[m_default_data]), m_size(m_default_data) // default constructor
		{
		}

		template <class T>
		Array<T>::Array(int size) : m_data(new T[size]), m_size(size)// constructor with size argument
		{
		}

		template <class T>
		Array<T>::Array(const Array<T>& a)// copy constructor
		{
			m_size = a.m_size;
			m_data = new T[m_size];
			for (int i = 0; i < m_size; i++)
			{
				m_data[i] = a.m_data[i];
			}
		}

		template <class T>
		Array<T>::~Array() //destructor
		{
			delete[] m_data;
		}

		template <class T>
		Array<T>& Array<T>::operator = (const Array<T>& a) //assignment operator
		{
			if (this == &a)
			{
				return *this;
			}

			delete[] m_data;
			m_size = a.m_size;
			m_data = new T[a.m_size];

			for (int i = 0; i < a.m_size; i++)
			{
				m_data[i] = a.m_data[i];
			}

			return *this;
		}

		template <class T>
		T& Array<T>::operator [] (int index)
		{
			if (index >= m_size || index < 0)
			{
				throw OutOfBoundsException(index);
			}

			return m_data[index];
		}

		template <class T>
		const T& Array<T>::operator [] (int index) const
		{
			if (index >= m_size || index < 0)
			{
				throw OutOfBoundsException(index);
			}

			return m_data[index];
		}

		template <class T>
		int Array<T>::Size() const // function that returns the size of the array
		{
			return m_size;
		}

		template <class T>
		void Array<T>::SetElement(int index, const T& replace) // function that sets an element
		{
			if (index >= m_size || index < 0)
			{
				throw OutOfBoundsException(index);
			}

			m_data[index] = replace;
			return;
		}

		template <class T>
		T& Array<T>::GetElement(int index) const // function that gets an element
		{
			if (index >= m_size || index < 0)
			{
				throw OutOfBoundsException(index);
			}

			return m_data[index];
		}

		template <class T>
		void Array<T>::DefaultSize(int size) // function that sets the default size
		{
			m_default_data = size;
		}

		template <class T>
		int Array<T>::DefaultSize() // function that gets the default size
		{
			return m_default_data;
		}

	}
}
#endif