//
//  main.cpp
//  C++ Certificate
//  Day of the week conversion.
//
//  Created by NELSON YEUNG on 29/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>

int main()
{
	int day; 

	// Print the day of a given day-number
	// Input: an integer
	// Output: its day of the week
	void DayName(int day);

	// Ask the user to input the day number.
	printf("Please input a day number from 1 to 7:\n");
	scanf_s("%d", &day);

	// Call DayName to print the day number and day name.
	DayName(day);
	
	return 0;
}

void DayName(int day)
{
	// A two-dimensional array storing days of the week.
	char string[7][10] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

	// Print the day name.
	printf("Day %d is a %s.\n", day, string[day - 1]);
}