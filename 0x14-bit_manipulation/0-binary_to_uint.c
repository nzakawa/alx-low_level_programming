#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * binary_to_uint - converts a bit string to unsigned int
 *
 * @b: string to convert
 *
 * Return: decimal unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int j, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (j = 0; j != len; j++)
	{
		if (b[len - j - 1] == '1')
			n += 1 << j;
		else if (b[len - j - 1] != '0')
			return (0);
	}
	return (n);
}
