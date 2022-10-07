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
	int i, j, k;
	char *p;

	if (s1 == 0)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; K++)
		p[k] = s1[k];
	for (k = 0; k < j; K++)
		p[k + i] = s2[k];
	p[i + j] = '\0';
	return (p);
}

