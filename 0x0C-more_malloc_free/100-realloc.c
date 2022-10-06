#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory allocated previousely
 * @new_size: size of newly allocated space
 * @old_size: inially allocated space for ptr
 *
 * Return: pointer to memory allocated newly, or NULL if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int j, mm = new_size;
	char *q = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (j = 0; j < max; j++)
		p[j] = q[j];
	free(ptr);
	return (p);
	}
