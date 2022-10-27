#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check bits
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 64)
		return (-1);
	bits = (n >> index) & 1;

	return (bits);
}
