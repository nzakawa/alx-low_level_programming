#include "main.h"

/**
 * flip_bits - return number of bits that would need to be flipped to
 *
 * @n: first number
 * @m: second number
 * Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval, check;
	unsigned int count, j;

	count = 0;
	check = 1;
	oxrval = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (check == (xorval & check))
			count++;
		check << = 1;
	}
	return (count);
}

