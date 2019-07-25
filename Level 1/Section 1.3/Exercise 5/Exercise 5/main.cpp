//
//  main.cpp
//  C++ Certificate
//  Difference between i-- and --i.
//
//  Created by NELSON YEUNG on 20/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	int i = 0;

	// i_minus_minus = i, then i = i - 1.
	int i_minus_minus = i--;

	i = 0;

	// i = i - 1, then minus_minus_i = i.
	int minus_minus_i = --i;

	// Print the result of i_minus_minus and minus_minus_i on screen.
	printf("i equals to 0.\nIf we assign i-- to a variable, then it equals to %d.\nIf we assign --i to a variable, then it equals to %d.\n", i_minus_minus, minus_minus_i);

	return 0;
}
