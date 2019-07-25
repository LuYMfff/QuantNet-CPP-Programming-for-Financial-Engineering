//
//  freq.c
//  C++ Certificate
//  Count of 0/1/2/3/4.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	char input_character; // input character
	int zero = 0, one = 0, two = 0, three = 0, four = 0; // times that 0/1/2/3/4 has been typed

	printf("%s", "Please input characters. Stop the input with Ctrl+D.\n");

	while ((input_character = getchar()) != 4)
	{
		// Calculate the times that each number has been typed.
		switch (input_character)
		{
		case '0':
			zero++;
			break;
		case '1':
			one++;
			break;
		case '2':
			two++;
			break;
		case '3':
			three++;
			break;
		case '4':
			four++;
			break;
		default:
			break;
		}
	}

	// Print the amount of times each of the numbers 0-4 has been typed.
	printf("'0' has been typed %d times.\n", zero);
	printf("'1' has been typed %d times.\n", one);
	printf("'2' has been typed %d times.\n", two);
	printf("'3' has been typed %d times.\n", three);
	printf("'4' has been typed %d times.\n", four);

	return 0;
}
