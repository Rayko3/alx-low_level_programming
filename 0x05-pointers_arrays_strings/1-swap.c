#include "main.h"

/**
 *swap_int - swaping the values of two int
 *@*a : pointer to an int
 *@*b : pointer to an int
 *@a : an int
 *@b : an int
 */

void swap_int(int *a, int *b)
{
	int c;

	c  = *a;
	*a = *b;
	*b = c;
}
