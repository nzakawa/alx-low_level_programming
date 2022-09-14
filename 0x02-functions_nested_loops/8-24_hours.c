#include "main.h"
/**
 * jack_bauer - function that print every minute of the day
 * h = hour, m = min
 * Return: 0
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int h_reminder;
	int m_reminder;

	while (h <= 23)
	{
	while (m <= 59)
	{
	m_reminder = m % 10;
	h_reminder = h % 10;
	_putchar(h / 10 + '0');
	_putchar(h_reminder + '0');
	_putchar(':');
	_putchar(h / 10 + '0');
	_putchar(m_reminder + '0');
	m++;
	_putchar('\n');
	}
	h++;
	m = 0;
	}
}
