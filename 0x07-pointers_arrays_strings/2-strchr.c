#include "main.h"

/**
 * i_strchr - function that locate character in a string
 * @s: string
 * @c: constant
 * Return: 0.
 */

char *_strchr(char *s, char c)
{
	int j = 0, k;

	while (s[j])
	{
		j++;
	}
	for (k = 0; k <= j; k++)
	{
		if (c == s[c])
		{
			s += k;
			return (s);
		}
	}
	return ('\0');
}
