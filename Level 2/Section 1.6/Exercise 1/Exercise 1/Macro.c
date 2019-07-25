//
//  Macro.c
//  C++ Certificate
//  Two print macro calls.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
#include "Defs.h"

int main()
{
	double a, b;

	// Ask the user to input a and b.
	printf("Please input two numbers:\n");
	scanf_s("%lf %lf", &a, &b);

	// Print variable a.
	print1(a, b);

	// Print variable a and b.
	print2(a, b);

	return 0;
}