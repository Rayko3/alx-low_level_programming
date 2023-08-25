#include "main.h"

/**
 *_strncp - coppy a string up to n bytes
 **@dest : pointer to a string
 *@src : pointer to a string
 *@n : an integer
 *Return: pointer to a string
 */

char *_strncp(char *dest, char *src, int n)
{
	int j = 0;


	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
