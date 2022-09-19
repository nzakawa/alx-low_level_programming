#include "main.h"

/**
 * puts_half - function thta prints second half of string
 * @str: this is an aarray string type
 * Return 0
 */
void puts_half(char *str)
{
	int a, b, c;

	a = strline(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (c = b; c < a; c++)
		_putchar(str[c]);
	_putchar('\n');
}
