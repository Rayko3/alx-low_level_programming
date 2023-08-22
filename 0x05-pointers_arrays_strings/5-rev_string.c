#include "main.h"

/**
 *rev_string - reverses a string
 *@s : pointer to a string
 */


void rev_string(char *s)
{
	int i = 0;
	int j;
	char a;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		a = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = a;
	}
}
