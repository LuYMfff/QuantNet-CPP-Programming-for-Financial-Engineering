//
//  main.cpp
//  C++ Certificate
//  Temperature conversion II
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	double Celsius = 0.0, Fahrenheit; // temperature in Celsius/Fahrenheit

	// Print header text.
	printf("%10s%14s\n", "Celsius", "Fahrenheit");

	for (Celsius = 0.0; Celsius <= 19.0; Celsius++)
	{
		// Convert temperature in Fahrenheit to temperature in Celsius and print them.
		Fahrenheit = Celsius * 9.0 / 5.0 + 32.0;
		printf("%10.1f%10.1f\n", Celsius, Fahrenheit);
	}
	return 0;
}
