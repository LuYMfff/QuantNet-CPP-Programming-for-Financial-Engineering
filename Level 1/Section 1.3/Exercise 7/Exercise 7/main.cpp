//
//  main.cpp
//  C++ Certificate
//  Multiply a number by a factor 2 to the power n.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	int num_input, num_power; // number input and power input

	// Ask the user to input the number to be multiplied.
	printf("Please input the integer to multiply.\n");
	scanf_s("%d", &num_input);

	// Ask the user to input the power.
	printf("Please input the power n.\n");
	scanf_s("%d", &num_power);

	// Print the result of multiplying num_input by a factor 2 to the power num_power on screen.
	printf("If we multiply %d by a factor 2 to the power %d, we get %d.\n",
		num_input, num_power, (num_input << num_power));
	fflush(stdin);
	return 0;
}
