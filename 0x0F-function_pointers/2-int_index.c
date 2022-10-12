#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: integer array
 * @size: size of array
 * @cmp: function use to compare
 * Return: index of match, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int j;

	if (array != NULL && cmp != NULL)
		for (j = 0; j < size; j++)
			if (cmp(array[j]))
				return (j);
	return (-1);
}
