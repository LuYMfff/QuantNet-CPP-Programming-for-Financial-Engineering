//
//  main.cpp
//  C++ Certificate
//  Right shift an integer.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	int i, i_after_shift; // integer input and its result after shift

	// Ask the user to input an integer.
	printf("Please input an integer.\n");

	scanf_s("%d", &i);
	{
		// Get the result after shifting.
		i_after_shift = i >> 2;

		// Print the result after shift on screen.
		printf("After shift, we get %d.\n", i_after_shift);

		// As i is a signed integer, an arithmetic shift is performed.
		printf("An arithmetic shift if performed.\n");
	}

	fflush(stdin);
	return 0;
}
