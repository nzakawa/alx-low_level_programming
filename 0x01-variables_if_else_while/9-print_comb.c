#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar('');
		}
		num++;
	}
		putchar(''\n);

		return (0);
	}
