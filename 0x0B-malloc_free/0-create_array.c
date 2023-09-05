#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars,
 *and initializes it with a specific char
 *@size : is the size of the string
 *@c : is a char
 *Return: pointer to a string
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
	{
		return (0);
	}
	ar = malloc(size * sizeof(char));
	ar[0] = c;
	return (ar);
}
