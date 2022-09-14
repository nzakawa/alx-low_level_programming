#include "main.h"
/**
 * _24-hours - function that print every minute of the day
 * 
 * Return: 24 hour of the clock 
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; m < 24; h++)
	{
	for (m = 0; m < 60; m++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
	}
	}
}
