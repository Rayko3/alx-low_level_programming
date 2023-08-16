#include "main.h"

/**
 * _isalpha - check if char is an alphabetic char
 *
 *
 *@c : is a ASCII character
 *
 *
 * Return: 1 if true , 0 if not
 *
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
