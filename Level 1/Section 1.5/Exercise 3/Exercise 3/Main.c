//
//  Main.c
//  C++ Certificate
//  Print a number multiplied by 2.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>

int main()
{
	double i;

	// Ask the user tp input a number.
	printf("Please input a number.\n");
	scanf_s("%lf", &i);

	// Print the number multiplied by 2.
	print(i);

	return 0;
}
