#include "main.h"

/**
 *_strncpy - coppy a string up to n bytes
 **@dest : pointer to a string
 *@src : pointer to a string
 *@n : an integer
 *Return: pointer to a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	int i;


	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
