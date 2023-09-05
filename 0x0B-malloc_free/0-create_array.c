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
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
