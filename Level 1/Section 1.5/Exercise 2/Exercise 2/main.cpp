//
//  main.cpp
//  C++ Certificate
//  Factorial.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

// Find the factorial of a number.
// Inputs: number.
// Output: the factorial of number.
int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

#include <stdio.h>
int main()
{
	int number;
	int factorial(int number);

	// Ask the user to input a number.
	printf("Please input an integer:\n");
	scanf_s("%d", &number);

	// Print the result.
	printf("The factorial of %d equals to %d.\n", number, factorial(number));

	return 0;
}
