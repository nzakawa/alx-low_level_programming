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
	unsigned long int xorval = n ^ m;
	unsigned int start = 0;

	while (xorval)
	{
		if (oxrval & 1u1)
			start++;
		xorval = xorval >> 1;
	}
	return (start);
}
