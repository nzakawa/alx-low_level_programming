#include "main.h"
/**
 * _puts - functions that prints string
 * @str: pointer to the string
 * Return: 0
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
	_putchar(str[j]);
	j++;
	}
	_putchar('\n');
}
