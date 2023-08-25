#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1 : pointer to a string
 *@s2 : pointer to a string
 *Return: an integer
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i > j)
	{
		return (15);
	}
	else if (j > i)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
