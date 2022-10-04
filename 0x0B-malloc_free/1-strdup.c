#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to pointer
 *
 * Return: Returns NULL if str is equal to NULL
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr, *j;

	if (!str)
		return (NULL);

	ptr = str;
	while (*ptr++)
		size++;

	j = malloc(size + 1);
	if (!j)
		return (NULL);
	ptr = j;
	while (*str)
		*ptr++ = *str++;
	*ptr = 0;
	return (j);
}
