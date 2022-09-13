#include "main.h"
/**
 * print_sign - a function that print a sign of number
 * @n: input number
 * Return: 1 otherwise 0 base on condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

