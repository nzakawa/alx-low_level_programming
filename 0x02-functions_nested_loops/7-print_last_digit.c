#include "main.h"
/**
 * print_last_digit - function to print last digit of a number
 * @ldn: last digit of number
 * Return: value of the last number
 */
int print_last_digit(int ldn)
{
	int t;

	t = (ldn % 10);
	if (t < 0)
	{
		t = (-1 * t);
	}
	_putchar(t + '0');
	return (t);
}
