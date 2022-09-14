#include "main.h"
#include <stdio.h>
/**
 * main - prints the sum of mulitiples number
 * Return: Always 0
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum  += i;
	printf("%d\n", sum);
	return (0);
}
