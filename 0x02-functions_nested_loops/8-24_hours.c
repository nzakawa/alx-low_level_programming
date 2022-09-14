#include "main.h"
/**
 * jack_bauer - function that print every minute of the day
 * @h: hour
 * @m: minute
 * reset m
 * Return: 0
 */
void jack_bauer(void)
{
	int h, m;
	
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; h++)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
		}
	}
}
