//
//  main.cpp
//  C++ Certificate
//  Calculate the suface of a triangle.
//
//  Created by NELSON YEUNG on 20/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	double base; // triangle base
	double height; // triangle height
	double triangle_surface; // triangle surface

	// Ask the user to input base and height of the triangle.
	printf("Please input the base and height of the triangle.\n");

	scanf_s("%lf %lf", &base, &height);

	if (base > 0 && height > 0)
	{
		//Calculate surface of the triangle.
		triangle_surface = base * height / 2;
		// Print surface of the triangle on screen.
		printf("The surface of the triangle is %lf.\n", triangle_surface);
	}
	else
	{
		// If either base or height is not positive number, send error message and exit.
		printf("Input Error.\n");
		return 0;
	}

	fflush(stdin);
}
