//
//  main.cpp
//  C++ Certificate
//  Print the digits of an integer.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>

// Print the integer digit by digit.
// Input: an integer.
// Output: print all digits of the integer.
void printnumber(int number)
{
	// If the integer input is negative, print a "-".
	if (number < 0)
	{
		putchar('-');
		number = -number;
	}

	if (number / 10)
	{
		printnumber(number / 10);
	}

	putchar('0' + number % 10);
	putchar('\n');
}

int main()
{
	int number;

	// Ask the user to input a number.
	printf("Please input an integer:\n");
	scanf_s("%d", &number);

	// Print the result.
	printnumber(number);

	return 0;
}
