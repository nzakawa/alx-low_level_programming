#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
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
