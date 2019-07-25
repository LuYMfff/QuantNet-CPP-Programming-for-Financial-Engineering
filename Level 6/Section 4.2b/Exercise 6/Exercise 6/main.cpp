//
//  main.cpp
//  C++ Certificate
//  Value Template Arguments
//
//  Created by NELSON YEUNG on 10/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//
#include "Stack.cpp"
#include <iostream>

using namespace std;
using namespace NELSON::Containers;

int main()
{
	// default constructor
	Stack<int, 10> stack0;

	// Push(), last one is an exception
	for (int i = 0; i < 11; i++)
	{
		try
		{
			stack0.Push(i);
		}
		catch (StackException & se)
		{
			cout << se.GetMessage() << endl;
		}
	}

	// copy constructor and assignment
	Stack<int, 10> stack1(stack0);
	Stack<int, 10> stack2 = stack1;

	// Pop(), last one is an exception
	for (int i = 0; i < 11; i++)
	{
		try
		{
			cout << stack2.Pop() << endl;
		}
		catch (StackException & se)
		{
			cout << se.GetMessage() << endl;
		}
	}

	return 0;
}