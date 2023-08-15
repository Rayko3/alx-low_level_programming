#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char word[8]="_putchar";
	for (i=0;i<9;i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return(0);
}
