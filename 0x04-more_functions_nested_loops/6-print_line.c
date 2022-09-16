#include <stdio.h>
#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number it lines
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
