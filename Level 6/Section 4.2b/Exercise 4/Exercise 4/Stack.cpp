//
//  Stack.cpp
//  C++ Certificate
//  Source file for the Stack class.
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef Stack_CPP
#define Stack_CPP

#include "Stack.hpp"

namespace NELSON
{
	namespace Containers
	{
		template <class T>
		Stack<T>::Stack() : m_current(0), m_array() // default constructor
		{
		}

		template <class T>
		Stack<T>::Stack(int size) : m_current(0), m_array(size) // constructor with size argument
		{
		}

		template <class T>
		Stack<T>::Stack(const Stack<T>& stack) : m_current(stack.m_current), m_array(stack.m_array) // copy constructor
		{
		}

		template <class T>
		Stack<T>::~Stack() //destructor
		{
		}

		template <class T>
		Stack<T>& Stack<T>::operator = (const Stack<T>& stack) // assignment operator
		{
			if (this == &stack)
			{
				return *this;
			}

			m_current = stack.m_current;
			m_array = stack.m_array;

			return *this;
		}

		template <class T>
		T& Stack<T>::Pop() // function that decrements the current position and then returns the element at that position
		{
			if (m_current == 0)
			{
				return m_array[-1];
			}
			else
			{
				return m_array[--m_current];
			}
		}

		template <class T>
		void Stack<T>::Push(const T& item) // function that increments the current position afterwards
		{
			if (m_current == m_array.Size())
			{
				m_array[m_current+1] = item;
			}
			else
			{
				m_array[m_current++] = item;
			}
		}
	}
}
#endif