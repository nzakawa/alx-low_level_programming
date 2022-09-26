#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destionation pointer
 * @src: source pointer
 * @n: integer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr dest;

	while (n--)
		*ptr++ = *src++;
	return (dest);
}
