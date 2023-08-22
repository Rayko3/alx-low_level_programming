#include "main.h"

/**
 *_puts -  prints a string in reverse
 *@str : pointer to a string
 */


void print_rev(char *str)
{
        int i = 0;
	int j;

        while (str[i] != '\0')
        {
                i++;
        }
	for (j = 0; j < i; j++):
	{
		_putchar(s[i-j-1]);
	}
	_putchar('\n');
}
