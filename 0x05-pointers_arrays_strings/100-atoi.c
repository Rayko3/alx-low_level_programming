#include "main.h"

/**
 *_atoi - convert a string to an integer
 *@s : pointer to a string
 *Return: the integer
 */

int _atoi(char *s)
{
	int k = 1;
	int i = 0;
	int j;
	int l = 0;
	int numb = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (s[j] == 45)
		{
			k = k * (-1);
		}
	}
	while ((s[l] < 48 || s[l] > 57) && (l <= i))
	{
		l++;
	}
	if ((s[l] < 48 || s[l] > 57) && (l == i))
	{
		return (0);
	}
	while (s[l] >= 48 && s[l] <= 57)
	{
		numb = (numb * 10) + (s[l] - '0');
		l++;
	}
	return (k * numb);
}
