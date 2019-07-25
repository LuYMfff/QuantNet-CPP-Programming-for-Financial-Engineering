//
//  main.cpp
//  C++ Certificate
//  Temperature conversion.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	double Fahrenheit = 0.0, Celsius; // temperature in Fahrenheit/Celsius

	// Print header text.
	printf("%10s%10s\n", "Fahrenheit", "Celsius");

	while (Fahrenheit <= 300.0)
	{
		// Convert temperature in Fahrenheit to temperature in Celsius and print them.
		Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0);
		printf("%10.1f%10.1f\n", Fahrenheit, Celsius);
		Fahrenheit += 20;
	}
	return 0;
}
