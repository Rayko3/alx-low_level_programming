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
	int i = 0;
	char *ar;

	if (size == 0)
	{
		return (0);
	}
	ar = malloc(size * sizeof(char));
	while (ar[i])
	{
		ar[i] = c;
		++i;
	}
	return (ar);
}
