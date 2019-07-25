//
//  main.cpp
//  C++ Certificate
//  Read the characters from the keyboard and print.
//
//  Created by NELSON YEUNG on 29/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>

#define MAX_LENGTH 10000

int main()
{
	int char_input; // a character input
	int length = 0; // number of characters in the line
	char string[MAX_LENGTH]; // string to store the current line

	// Print the contents of current line on screen
	// Inputs: string of the current line, string length
	// Outputs - print the string on screen.
	void PrintCharOnScreen(char string[MAX_LENGTH], int length);

	// Ask the user to input characters.
	printf("Please input characters and CTRL + A to end.\n");

	// If the user doesn't input CTRL + A, keep reading characters.
	while ((char_input = getchar()) != 1)
	{
		// If the user press ENTER, print the current line on screen.
		if (char_input == 10 && length > 0)
		{
			PrintCharOnScreen(string, length);

			// Re-intialize the number of characters to 0.
			length = 0;
			continue;
		}

		// Add the character to string.
		string[length] = char_input;
		length++;
	}

	// Print the last line on screen.
	PrintCharOnScreen(string, length);
	
	// When program ends, display the following message.
	printf("CTRL + A is a correct ending.\n");

	return 0;
}

void PrintCharOnScreen(char string[MAX_LENGTH], int length)
{
	for (int i = 0; i < length; i++)
	{
		putchar(string[i]);
	}

	putchar('\n');
}