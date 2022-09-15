#include "main.h"
/**
 *print_most_numbers - printing more numbers
 */
void more_numbers(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		if (y !=2 && y !=4)
			_putchar(y + '0');
	}
	_putchar('\n');
}
