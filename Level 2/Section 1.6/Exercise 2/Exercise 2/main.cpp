//
//  main.cpp
//  C++ Certificate
//  Return the maximum value of given arguments.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
#include "Defs.h"

int main()
{
	double x, y, z;

	// Ask the user to input three numbers.
	printf("Please input three numbers:\n");
	scanf_s("%lf %lf %lf", &x, &y, &z);

	// Print the maximum value of first two numbers using MAX2.
	printf("The maximum value of first two numbers is %lf.\n", max2(x, y));

	// Print the maximum value of all three numbers using MAX3.
	printf("The maximum value of all three numbers is %lf.\n", max3(x, y, z));

	return 0;
}