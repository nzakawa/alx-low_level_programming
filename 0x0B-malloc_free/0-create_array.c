#include "main.h"

/**
* create_array - Write a function that creates an array of chars,
* and initializes it with a specific char.
* @size: size of an array
* @c: character
* Return: NULL is size is zero otherwise return pointer to array
* Null if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
