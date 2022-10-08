#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *ptr;

	if (s2 == NULL)
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
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (k  = 0; k < j; k++)
		ptr[k + i] = s2[k];
	ptr[i + j] = '\0';
	return (ptr);
}

