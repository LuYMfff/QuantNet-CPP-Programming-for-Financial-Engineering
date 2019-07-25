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
#include"Point.hpp"
using namespace std;
namespace NELSON
{
	namespace Containers
	{
		class Array
		{
		private:
			int m_size;
			CAD::Point* m_data;

		public:
			Array(); // default constructor
			Array(int size); // constructor with size argument
			Array(const Array& a);// copy constructor
			~Array(); //destructor

			Array& operator = (const Array& a); //assignment operator
			CAD::Point& operator [] (int index);
			const CAD::Point& operator [] (int index) const;

			int Size() const; // function that returns the size of the array
			void SetElement(int index, CAD::Point& replace); // function that sets an element
			CAD::Point& GetElement(int index) const; // function that gets an element

		};
	}
}

#endif