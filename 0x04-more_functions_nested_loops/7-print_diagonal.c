#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal lins
 * @n: number of lines to be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;
	int m;

	while (i < n && n > 0)
	{
		m = 0;
		while (m < i)
		{
			_putchar(' ');
			m++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
