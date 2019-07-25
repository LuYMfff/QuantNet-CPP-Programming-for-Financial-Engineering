//
//  Array.cpp
//  C++ Certificate
//  Source file for the Array class.
//
//  Created by NELSON YEUNG on 7/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "Point.hpp"
#include "Array.hpp"
#include <iostream>
using namespace std;

Array::Array() : m_data(new Point[10]), m_size(10) // default constructor
{
}

Array::Array(int size) : m_data(new Point[size]), m_size(size)// constructor with size argument
{
}

Array::Array(const Array& a)// copy constructor
{
	m_size = a.m_size;
	m_data = new Point[m_size];
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
	m_data = new Point[a.m_size];

	for (int i = 0; i < a.m_size; i++)
	{
		m_data[i] = a.m_data[i];
	}

	return *this;
}

Point& Array::operator [] (int index)
{
	if (index >= m_size)
	{
		return m_data[0];
	}
	
	return m_data[index];
}
const Point& Array::operator [] (int index) const
{
	if (index >= m_size)
	{
		return m_data[0];
	}

	return m_data[index];
}

int Array::Size() const // function that returns the size of the array
{
	return m_size;
}

void Array::SetElement(int index, Point& replace) // function that sets an element
{
	if (index >= m_size)
	{
		return;
	}

	m_data[index] = replace;
	return;
}

Point& Array::GetElement(int index) const // function that gets an element
{
	if (index >= m_size)
	{
		return m_data[0];
	}

	return m_data[index];
}