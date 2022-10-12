#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @cmp: function pointer
 * @size: size of array
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
