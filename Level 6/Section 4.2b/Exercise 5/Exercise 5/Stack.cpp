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

		template <class T>
		void Stack<T>::Push(const T& item) // function that increments the current position afterwards
		{
			try
			{
				m_array[m_current++] = item;
			}
			catch (ArrayException &ae)
			{
				m_current--;
				throw StackFullException();
			}
		}
	}
}
#endif