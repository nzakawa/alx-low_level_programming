#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The number to allocated
 *
 * Return: a pointer to the alocatued memory
 */
void *malloc_checked(unsigned int b)
{
	void *mry = malloc(b);

	if (mry == NULL)
		exit(98);

	return (mry);
}
