#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*
* i is always egal to 0 so we can't break out of the while loop
*
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
