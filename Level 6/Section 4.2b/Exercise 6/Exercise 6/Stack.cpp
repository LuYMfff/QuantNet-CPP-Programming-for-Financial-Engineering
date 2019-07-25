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
#include "StackEmptyException.hpp"
#include "StackFullException.hpp"
namespace NELSON
{
	namespace Containers
	{
		template <typename T, int size>
		Stack<T, size>::Stack() : m_current(0), m_array(size) // default constructor
		{
		}

		template <typename T, int size>
		Stack<T, size>::Stack(const Stack<T, size>& stack) : m_current(stack.m_current), m_array(stack.m_array) // copy constructor
		{
		}

		template <typename T, int size>
		Stack<T, size>::~Stack() //destructor
		{
		}

		template <typename T, int size>
		Stack<T, size>& Stack<T, size>::operator = (const Stack<T, size>& stack) // assignment operator
		{
			if (this == &stack)
			{
				return *this;
			}

			m_current = stack.m_current;
			m_array = stack.m_array;

			return *this;
		}

		template <typename T, int size>
		T& Stack<T, size>::Pop() // function that decrements the current position and then returns the element at that position
		{
			try
			{
				return m_array[--m_current];
			}
			catch (ArrayException & ae)
			{
				m_current++;
				throw StackEmptyException();
			}
		}

		template <typename T, int size>
		void Stack<T, size>::Push(const T& item) // function that increments the current position afterwards
		{
			try
			{
				m_array[m_current++] = item;
			}
			catch (ArrayException & ae)
			{
				m_current--;
				throw StackFullException();
			}
		}
	}
}
#endif