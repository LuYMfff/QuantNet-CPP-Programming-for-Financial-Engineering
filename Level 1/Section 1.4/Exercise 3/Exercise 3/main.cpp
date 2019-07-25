//
//  main.cpp
//  C++ Certificate
//  Use of switch
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	int ASCII_input_character; // ASCII-value of the input
	int num_characters = 0; // number of characters input
	int num_words = 0; // number of words input
	int num_newlines = 0; // number of new lines input
	bool last_character_flag = false; // true if last input is a character, but false otherwise
	bool last_newline_flag = false; // set to true if last input is a new line, but false otherwise

	printf("Please input text, using Ctrl+D to stop.\n");

	while ((ASCII_input_character = getchar()) != 4) // If input is Ctrl+D, exit the loop.
	{
		switch (ASCII_input_character)
		{
		case 32: // space bar
			switch (last_character_flag)
			{
				// If last input is a character, count as a new word.
			case 1:
				num_characters++;
				num_words++;
				break;
			default:
				break;
			}
			last_character_flag = false;
			break;

		case 10: // newline
			switch (last_character_flag)
			{
				// If last input is a character, count as a new word.
			case 1:
				num_words++;
				break;
			default:
				break;
			}
			last_character_flag = false;
			last_newline_flag = true;
			break;

		default:
			switch (last_newline_flag)
			{
				// If last input is a new line and current input is a character, count as a new line.
			case 1:
				num_newlines++;
				last_newline_flag = false;
			default:
				break;
			}
			num_characters++;
			last_character_flag = true;
			break;
		}
	}

	// At the end of the text, if last input is a character, the current word should be counted as a new word.
	switch (last_character_flag)
	{
	case 1:
		num_words++;
		break;
	default:
		break;
	}

	switch (num_words)
	{
	case 0:
		break;
	default:
		num_newlines++;
		break;
	}

	printf("The number of characters is %d.\nThe number of words is %d.\nThe number of new lines is %d.\n",
		num_characters, num_words, num_newlines);
	return 0;
}
