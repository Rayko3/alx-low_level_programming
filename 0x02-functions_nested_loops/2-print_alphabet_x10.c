#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 *
 * Return: void.
 */

void print_alphabeti_x10(void)
{
        int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
        {
                _putchar(i);
        }
	}
        _putchar('\n');
}
