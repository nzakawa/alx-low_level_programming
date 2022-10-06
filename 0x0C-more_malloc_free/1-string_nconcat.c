#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: return NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
		len++;

	concat = malloc(sizeof(char) * (len +));
	if (!concat)
		return (NULL);
	len = 0;
	for (j = 0; s1[j]; j++)
		concat[len++] = s1[j];

	for (j = 0; s2[j] && j < n; j++)
		concat[len++] = s2[j];

	concat[len] = '\0';

	return (concat);
}

