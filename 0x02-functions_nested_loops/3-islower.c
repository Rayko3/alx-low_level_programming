#include "main.h"

/**
 * _islower - check if char is a lower case
 *
 *
 *@c : is a ASCII character
 *
 *
 * Return: 1 if true , 0 if not
 *
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
