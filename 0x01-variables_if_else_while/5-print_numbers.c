#include <stdio.h>

/**
 * main - Entry prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}

