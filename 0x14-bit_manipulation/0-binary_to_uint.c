#include "main.h"

/**
 * binary_to_uint - converts a bit string to unsigned int
 *
 * @b: string to convert
 *
 * Return: decimal unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j;

	if (b == NULL)
		return (0);
	for (j = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			j = j << 1;
		}
		else if (*b == '1')
		{
			j = j << 1;
			j++;
		}
		else
		{
			return (0);
		}
	}
	return (j);
}
