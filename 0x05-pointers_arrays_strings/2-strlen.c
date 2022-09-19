#include "main.h"
/**
 * _strlen - function that return the lenght of string
 * @s: a pointer to the sring
 * Return: 0
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j])
		j++;
	return (j);
}
