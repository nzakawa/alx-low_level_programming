#include <stdio.h>
#include "main.h"

/**
 * main - printing largest prime factor
 * Return: 0
 */

int main(void)
{
	unsigned int long n = 612852475143, j = (int) sqrt(n);

	while (1)
	{
		if (n % j == 0)
		{
			print("%lu \n", n / j);
			break;
		}
		j--;
	}

	return (0);
}
