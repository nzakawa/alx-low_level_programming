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

	if (size < 1 || array == NULL || cmp == NULL)
	{

		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
				break;

		}
		if (j < size)
			return (j);
	}
	return (-1);
}
