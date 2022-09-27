#include "main.h"

/**
 * *_strpbrk - search a string for a set of bytes
 * @s: source string
 * @accept: string to be accepted
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0, k, l = 0;

	while (accept[j])
	{
		k = 0;
		while (s[k] != 32)
		{
			if (accept[j] == s[k])
			{
				l++;
			}
			k++;
		}
		j++;
	}
	return (l);
}
