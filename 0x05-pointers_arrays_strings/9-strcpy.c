#include "main.h"


/**
 *_strcpy - copies the string pointed to by src,
 *to the buffer pointed to by dest.
 *@dest : pointer to a string
 *@src : pointer to a string
 *Return: pointer
 */


char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (*dest);
}
