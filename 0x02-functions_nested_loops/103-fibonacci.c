#include <stdio.h>
/**
 * main - sum of fibobanacci
 * Return: Always 0
 */
int main(void)
{
	unsigned long count, x, y, z, sum;

	x = sum = 0;
	y = x;
	for (count = 0; count < 50; count++)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0 && z < 4000000)
		{
			sum += z;
		}
	}
	printf("%lu\n", sum);
		return (0);
}

