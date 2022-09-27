#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: string to be accepted
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				bytes++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
