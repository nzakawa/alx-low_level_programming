#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: strint lenght
 */

int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s > '\0')
	{
		j += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
