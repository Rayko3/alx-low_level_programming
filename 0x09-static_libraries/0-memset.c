#include "main.h"


/**
 *_memset -  fills memory with a constant byte
 *@s : pointer to a string
 *@b : char being filled
 *@n : number of bytes to be changed
 *Return: pointer to a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
