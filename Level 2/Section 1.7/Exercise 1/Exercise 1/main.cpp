//
//  main.cpp
//  C++ Certificate
//  Swap function.
//
//  Created by NELSON YEUNG on 29/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>

int main()
{
	double i, j;

	// Swap two numbers
	// Inputs: pointers to the two numbers
	// Outputs: swapping of the two numbers
	void Swap(double* pi, double* pj);

	// Ask the user to input two numbers.
	printf("Please input two numbers:\n");
	scanf_s("%lf %lf", &i, &j);

	// Swap the two numbers.
	Swap(&i, &j);

	printf("If we swap the two numbers, then the first number is now %lf, the second number is now %lf.\n", i, j);

	return 0;
}

void Swap(double* pi, double* pj)
{
	double temp;

	temp = (*pi);
	(*pi) = (*pj);
	(*pj) = temp;
}