#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: integer array
 * @action: pointer to the function to use
 * @size: size of array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		for (j = 0; j < size; j++)
			action(array[j]);
	}
}

