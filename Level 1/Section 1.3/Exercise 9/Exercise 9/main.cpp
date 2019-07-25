//
//  main.cpp
//  C++ Certificate
//  Conditional expressions.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
int main()
{
	int x = 1;
	int y = 1;
	int z = 1;
	x += y += x;
	printf("%d\n\n", (x < y) ? y : x); // 3
	printf("%d\n", (x < y) ? x++ : y++); // 2
	printf("%d\n", x); // 3
	printf("%d\n", y); // 3
	return 0;
}
