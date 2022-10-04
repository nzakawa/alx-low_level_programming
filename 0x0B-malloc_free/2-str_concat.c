#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: treat it as an empty string if NULL passed
 *  return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *p, *q;
	int k, l, i, j;

	q = "";
	if (s1 == NULL)
		s1 = q;
	if (s2 == NULL)
		s2 = q;
	i = k = l = 0;
	while (s1[k] != '\0')
	{
		k++;
	}
	while (s2[l] != '\0')
	{
		l++;
	}
	l++;
	p = malloc((k + l) * sizeof(*s1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < k)
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= l)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);
}
