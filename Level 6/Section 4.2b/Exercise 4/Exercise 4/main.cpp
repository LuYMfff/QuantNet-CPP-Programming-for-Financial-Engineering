//
//  main.cpp
//  C++ Certificate
//  Stack Class (composition)
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
	Stack<int> stack0;

	// Push(), last one is an exception
	for (int i = 0; i < 11; i++)
	{
		try
		{
			stack0.Push(i);
		}
		catch (ArrayException & ae)
		{
			cout << ae.GetMessage() << endl;
		}
	}

	// copy constructor and assignment
	Stack<int> stack1(stack0);
	Stack<int> stack2 = stack1;

	// Pop(), last one is an exception
	for (int i = 0; i < 11; i++)
	{
		try
		{
			cout << stack2.Pop() << endl;
		}
		catch (ArrayException & ae)
		{
			cout << ae.GetMessage() << endl;
		}
	}
	
	return 0;
}