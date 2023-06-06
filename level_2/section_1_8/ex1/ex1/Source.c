#include <stdio.h>
#include "Defs.h"
/*
PROMPT: Write a C-program that prints the contents of a struct called Article. An Article has the
following characteristics:
• Article number
• Quantity
• Description (20 characters)

The test program must create an Article of which the contents are assigned at
initialization level.

Printing the Article is done with a Print() function. This function gets the address of the
structure as a parameter.

Tip: Suppose that p is the pointer to the structure. It will allow the fields to be printed
by (*p).fieldname or p->fieldname.
*/

// The article struct is in Defs.h header file
// We instantiate the struct and provide values in line 26
// We pass the article1 memory location to the Print function
// We use the article pointer to access/print the values we provided at initialization

void Print(struct Article*);

int main() {
	struct Article article1 = {7, 1, "Article Desc"}; // initialize the article
	Print(&article1); // pass the article memory location to Print function
	return 0;
}

void Print(struct Article* article_ptr) {
	// print the article characteristics with a pointer to the article memory location
	printf("Article Number: %d\nArticle Description: %s\nArticle Quantity: %d\n", article_ptr->article_number, article_ptr->Description, article_ptr->quantity);

}