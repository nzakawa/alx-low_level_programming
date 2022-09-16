#include <stdio.h>
#include "main.h"

/**
 * print_square - prints square of a number
 * @n: number to be printed
 * Return: 0
 */
void print_square(int n)
{
	int i = 0;
	int m;

	while (i < n && n > 0)
	{
		m = 0;
		while (m < n)
		{
			_putchar('#');
			m++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
