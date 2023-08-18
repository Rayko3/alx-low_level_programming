#include "main.h"

/**
 *print_diagonal - draws a straight diagonal in the terminal
 *
 *@n : an integer
 *
 */


void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		if (n == 1)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
			for (i = 1; i < n; i++)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
