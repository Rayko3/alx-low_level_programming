#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers
 *@a : pointer to an array of int
 *@n : number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (j = 0; j < n / 2; j++)
	{
		i = a[j];
		a[j] = a[n - 1 - j];
		a[i - 1 - j] = i;
	}
}
