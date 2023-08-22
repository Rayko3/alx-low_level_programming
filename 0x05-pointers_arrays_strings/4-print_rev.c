#include "main.h"

/**
 *print_rev -  prints a string in reverse
 *@s : pointer to a string
 */


void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(s[i - j - 1]);
	}
	_putchar('\n');
}
