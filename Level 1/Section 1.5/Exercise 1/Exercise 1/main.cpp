//
//  main.cpp
//  C++ Certificate
//  Difference between two numbers.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

// Find the difference between two numbers.
// Inputs: num_1 and num_2.
// Output: num_1 - num_2.
double minus(double num_1, double num_2)
{
	return num_1 - num_2;
}

#include <stdio.h>
int main()
{
	double number1, number2; // number inputs
	double minus(double number1, double number2);

	// Ask the user to input two numbers.
	printf("Please input two numbers:\n");
	scanf_s("%lf %lf", &number1, &number2);

	// Print the result.
	printf("%lf minus %lf equals to %lf.\n", number1, number2, minus(number1, number2));

	return 0;
}


