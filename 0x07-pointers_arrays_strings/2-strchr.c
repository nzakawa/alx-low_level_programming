#include "main.h"

/**
 * *_strchr - function that locate character in a string
 * @s: string
 * @c: constant
 * Return: 0.
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0' ; j++)
	{
		if (s[j] == c)
		{
			return (s + 1);
		}
	}

	return ('\0');
}
