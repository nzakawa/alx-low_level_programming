#include "main.h"
/**
 * _puts - functions the prints string
 * @str: pointer to the string
 * Return: 0
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		J++;
	}
	_putchar('\n');
}
