#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: first value of array
 * @max: second value of array
 *
 * Return: If min > max, or If malloc fails, return NULL
 * otherwise return the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, j, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (!array)
		return (NULL);

	for (j = 0; j < size; j++)
		array[j] = min++;
	return (array);
}
