#include "main.h"

/**
 *_strcat - appends the src string to the dest string
 *@dest : pointer to a string
 *@src : pointer to a string
 *Return: pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (*dest);
}
