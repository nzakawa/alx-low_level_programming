#include "main.h"

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int check;

	if (n == 0)
	{
		_putchar ('0');
	}
	else
	{
		check = n & 1;
		n = n >> 1;
		if (!(n == 0))
			print_binary(n);
		_putchar(check + '0');
	}
}
