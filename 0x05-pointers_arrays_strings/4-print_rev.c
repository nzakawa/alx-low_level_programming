#include "main.h"
/**
 * print_rev - fuctions the prints string in reverse
 * @s: pointer the string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;
	while (s[j])
		j--
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
