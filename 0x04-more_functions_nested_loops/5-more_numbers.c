#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: 0
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchary(y + '0);
		}
		_putchar('\n');
	}
}
