//
//  main.cpp
//  C++ Certificate
//  Marital status.
//
//  Created by NELSON YEUNG on 20/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	int married; // marital status

	// Ask the user to input the marital status.
	printf("Please input 1 if you're married, or 0 if you're not married.\n");
	scanf_s("%d", &married);

	if (!married || married == 1) // If the user input 0 or 1
	{
		printf(married ? "You are married.\n" : "You are not married.\n");
	}
	else
	{
		// If the user inputs a number that is not 0 or 1, send error message and exit.
		printf("Input Error.\n");
	}

	fflush(stdin);
	return 0;
}
