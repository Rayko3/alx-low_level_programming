#include "main.h"

/**
 * _isdigit - check for digits
 * @c : is an integer
 * Return: 1 if true , 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
