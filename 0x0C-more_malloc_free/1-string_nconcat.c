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
	char *p, *q;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0, p = s1; *p; p++)
		i++;
	for (j = 0, p = s2; *p; p++)
		j++;
	if (n > j)
		n = j;

	q = malloc((i + n + 1) * sizeof(char));
	if (!q)
		return (0);

	p = q;
	while (*s1)
		*p++ = *s1++;
	k = 0;
	while (k < n)
	{
		*p++ = s2[i++];
	}
	*p = 0;
	return (q);
}
