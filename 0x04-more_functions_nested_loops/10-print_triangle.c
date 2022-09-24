#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: type of integer
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 1, m;

	while (i <= size && size > 0)
	{
		m = 0;
		while (m < size - i)
		{
			_putchar(' ');
			m++;
		}
		m = 0;
		while (m < i)
		{
			_putchar('#');
			m++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}

