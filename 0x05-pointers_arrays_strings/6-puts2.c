#include "main.h"
/**
 * puts2 - function that prints each string character
 * @str: pointer to the string
 * Return: 0
 */

void puts2(char *str)
{
int x = 0;
while (str[x] != '\0')
{
	if (x % 2 == 0)
	{
		_putchar(str[x]);
	}

	x++;
}
_putchar('\n');
}
