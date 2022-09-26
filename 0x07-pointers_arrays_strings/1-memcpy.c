#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destionation pointer
 * @src: source pointer
 * @n: integer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; n > 0 ; j++, n--)
	{
		dest[j] = src[j];
	}
	return (dest);
}

