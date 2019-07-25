//
//  Array.hpp
//  C++ Certificate
//  Header file for the Array class.
//
//  Created by NELSON YEUNG on 7/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#ifndef Array_HPP
#define Array_HPP

#include<iostream>
#include<string>

using namespace std;
namespace NELSON
{
	namespace Containers
	{
		template <class T>
		class Array
		{
		private:
			int m_size;
			T* m_data;
			static int m_default_data;

		public:
			Array(); // default constructor
			Array(int size); // constructor with size argument
			Array(const Array<T>& a);// copy constructor
			~Array(); //destructor

			static void DefaultSize(int size); // function that sets the default size
			static int DefaultSize(); // function that gets the default size

			Array<T>& operator = (const Array<T>& a); // assignment operator
			T& operator [] (int index);
			const T& operator [] (int index) const;

			int Size() const; // function that returns the size of the array
			void SetElement(int index, const T& replace); // function that sets an element
			T& GetElement(int index) const; // function that gets an element

		};
	}
}


#ifndef Array_CPP // Check Array.cpp file and include it with Array.hpp file.
#include "Array.cpp"
#endif

#endif





using namespace std;
namespace NELSON
{
	namespace Containers
	{
	}
}
