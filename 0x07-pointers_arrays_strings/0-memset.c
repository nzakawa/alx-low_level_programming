#include "main.h"

/**
 * *_memset - function that fills memory with constant byte
 * @s: pointer
 * @b: constant variable
 * @n: integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; n > 0; j++, n--)
	{
		s[j] = b;
	}
	return (s);
}
