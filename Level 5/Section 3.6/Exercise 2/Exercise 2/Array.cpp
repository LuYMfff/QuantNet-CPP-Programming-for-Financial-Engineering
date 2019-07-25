//
//  Array.cpp
//  C++ Certificate
//  Source file for the Array class.
//
//  Created by NELSON YEUNG on 7/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "Array.hpp"
#include "OutOfBoundsException.hpp"
using namespace std;

namespace NELSON
{
	namespace Containers
	{
		Array::Array() : m_data(new CAD::Point[10]), m_size(10) // default constructor
		{
		}

		Array::Array(int size) : m_data(new CAD::Point[size]), m_size(size)// constructor with size argument
		{
		}

		Array::Array(const Array& a)// copy constructor
		{
			m_size = a.m_size;
			m_data = new CAD::Point[m_size];
			for (int i = 0; i < m_size; i++)
			{
				m_data[i] = a.m_data[i];
			}
		}

		Array::~Array() //destructor
		{
			delete[] m_data;
		}

		Array& Array::operator = (const Array& a) //assignment operator
		{
			if (this == &a)
			{
				return *this;
			}

			delete[] m_data;
			m_size = a.m_size;
			m_data = new CAD::Point[a.m_size];

			for (int i = 0; i < a.m_size; i++)
			{
				m_data[i] = a.m_data[i];
			}

			return *this;
		}

		CAD::Point& Array::operator [] (int index)
		{
			if (index >= m_size || index < 0)
			{
				throw OutOfBoundsException(index);
			}

			return m_data[index];
		}
		const CAD::Point& Array::operator [] (int index) const
		{
			if (index >= m_size || index < 0)
			{
				throw OutOfBoundsException(index);
			}

			return m_data[index];
		}

		int Array::Size() const // function that returns the size of the array
		{
			return m_size;
		}

		void Array::SetElement(int index, CAD::Point& replace) // function that sets an element
		{
			if (index >= m_size || index < 0)
			{
				throw OutOfBoundsException(index);
			}

			m_data[index] = replace;
			return;
		}

		CAD::Point& Array::GetElement(int index) const // function that gets an element
		{
			if (index >= m_size || index < 0)
			{
				throw OutOfBoundsException(index);
			}

			return m_data[index];
		}
	}
}

