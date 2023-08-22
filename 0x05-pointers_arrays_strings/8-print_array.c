#include "main.h"
#include <stdio.h>


/**
 *print_array - prints n elements of an array of integers
 *@a : pointer of an int
 *@n : an int
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d,%c", a[i], ' ');
	}
	printf("%d\n", a[n - 1]);
}
