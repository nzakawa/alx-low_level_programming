#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: type of integer
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 1;
	int m;

	while (i <= size && size - 1)
	{
		m = 0;
		while (m < size - 1)
		{
			_putchar(' ');
			m++
		}
		m = 0;
		while (m < 1)
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

