#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: size of bytes in each array
 *
 * Return: return If nmemb or size is 0, then _calloc returns NULL
 * othewrwise return If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		p[j] = 0;
	return (p);
}
