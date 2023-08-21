#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @*s : pointer to a char
 * @s : is a char
 * Return: returns the lenght of the string
 */


int _strlen(char *s)
{
	int i = 0;
	int j = 0;

	while (!(*s[i] == \0))
	{
		j++;
	}
	return (j);
}
