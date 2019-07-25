//
//  main.cpp
//  C++ Certificate
//  struct construction.
//
//  Created by NELSON YEUNG on 29/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define LENGTH 30

struct Article
{
	int number; // Article number
	int quantity; // Quantity
	char description[LENGTH + 1]; // Description (20 characters)
};

int main()
{
	struct Article article; // An instance of the "Article" structure.

	// Print the contents of a struct Article
	// Input: a struct Article
	// Output: printing all instances of Article
	void Print(struct Article* p_article);

	// Initialize the contents of article.
	article.number = 5;
	article.quantity = 7;
	strcpy_s(article.description, "Some descriptions.");

	// Print the contents of article.
	Print(&article);

	return 0;
}

void Print(struct Article* p)
{
	printf("Article number: %d\n", p->number);
	printf("Quantity: %d\n", p->quantity);
	printf("Desciption: %s\n", p->description);
}