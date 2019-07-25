//
//  Array.hpp
//  C++ Certificate
//  Header file for the Stack class.
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef Stack_HPP
#define Stack_HPP

#include "Array.cpp"

using namespace std;
namespace NELSON
{
	namespace Containers
	{
		template <class T>
		class Stack
		{
		private:
			int m_current;
			Array<T> m_array;

		public:
			Stack(); // default constructor
			Stack(int size); // constructor with size argument
			Stack(const Stack<T>& stack);// copy constructor
			~Stack(); //destructor

			Stack<T>& operator = (const Stack<T>& stack); // assignment operator

			T& Pop(); // function that decrements the current position and then returns the element at that position
			void Push(const T& item); // function that increments the current position afterwards

		};
	}
}


#endif