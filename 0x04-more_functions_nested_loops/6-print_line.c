#include "main.h"

/**
 *print_line - draws a straight line in the terminal
 *
 *@n : an integer
 *
 */


void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchat('_');
		}
	}
	_putchar('\n');
}
