#include "main.h"
/**
 * print_last_digit - function to print last digit of a number
 * @t: last digit of number
 * Return: value of the last number
 */
int print_last_digit(int t)
{
	int t;

	t = (t % 10);
	if (t < 0)
	{
		t = (-1 * t);
	}
	_putchar(t + '0');
	return (t);
}
