#include "main.h"

/**
 *_strncat - appends the src string to the dest string
 *will using at most n bytes from src
 **@dest : pointer to a string
 *@src : pointer to a string
 *@n : an integer
 *Return: pointer to a string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
