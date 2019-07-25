//
//  Array.hpp
//  C++ Certificate
//  Header file for the Array class.
//
//  Created by NELSON YEUNG on 7/5/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#ifndef Array_HPP
#define Array_HPP

#include<iostream>
#include<string>
#include"Point.hpp"
using namespace std;

class Array
{
private:
	int m_size;
	Point* m_data;

public:
	Array(); // default constructor
	Array(int size); // constructor with size argument
	Array(const Array& a);// copy constructor
	~Array(); //destructor

	Array& operator = (const Array& a); //assignment operator
	Point& operator [] (int index);
	const Point& operator [] (int index) const;

	int Size() const; // function that returns the size of the array
	void SetElement(int index, Point& replace); // function that sets an element
	Point& GetElement(int index) const; // function that gets an element

};

#endif