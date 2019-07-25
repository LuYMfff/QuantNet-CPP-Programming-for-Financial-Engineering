//
//  main.cpp
//  C++ Certificate
//  Read the characters from the keyboard and write to a file.
//
//  Created by NELSON YEUNG on 29/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
#define MAX_NAME_LENGTH 50
#define MAX_LENGTH 10000

int main()
{
	int char_input; // a character input
	int length = 0; // number of characters in the line
	char string[MAX_LENGTH]; // string to store the current line
	char str_file[MAX_NAME_LENGTH]; // string to store file name

	// Write a string to a file.
	// Inputs: file name, string, string length.
	// Outputs: file with string being written
	void Write(char str_file[MAX_NAME_LENGTH], char string[MAX_LENGTH], int length);

	// Ask the user to input file name.
	printf("Please input a file name:\n");

	// Get file name.
	gets_s(str_file);

	// Ask the user to input characters.
	printf("Please input characters and CTRL + A to end.\n");

	// If the user doesn't input CTRL + A, keep reading characters.
	while ((char_input = getchar()) != 1)
	{
		// If the user press ENTER, write the current line to the file.
		if (char_input == 10 && length > 0)
		{
			Write(str_file, string, length);

			// Re-intialize the number of characters to 0.
			length = 0;
			continue;
		}

		// Add the character to string.
		string[length] = char_input;
		length++;
	}

	// Write the last line to the file.
	Write(str_file, string, length);

	// When program ends, display the following message.
	printf("CTRL + A is a correct ending.\n");

	return 0;
}

void Write(char str_file[MAX_NAME_LENGTH], char string[MAX_LENGTH], int length)
{
	FILE* fp; // file handle

	// Open the file with user specified name.
	fopen_s(&fp, str_file, "a+");

	// Write the current line to the file.
	for (int i = 0; i <= length - 1; i++)
	{
		fputc(string[i], fp);
	}

	fputc('\n', fp);

	// Close the file.
	fclose(fp);
}
