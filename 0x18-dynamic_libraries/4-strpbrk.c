#include "main.h"

/**
 * _strpbrk - string searches for any set of bytes
 * @s: the search string
 * @accept: the set of bytes
 *
 * Return: return poiter to the bytes - otherwise return null
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
