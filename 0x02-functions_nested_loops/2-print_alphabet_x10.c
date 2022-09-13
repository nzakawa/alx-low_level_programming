#include "main.h"
/**
 * main - print 10 times lowercase alphabet
 * Return - void
 */
void print_alphabet_x10(void)
{
int y;
int x;

for (x = 0; x < 10; x++)
{
	for (y = 'a'; y <= 'z'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
}
