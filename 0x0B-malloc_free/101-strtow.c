#include "main.h"
#include <stdlib.h>

/**
 * strtow -  function that splits a string into words
 * @str: string to split
 *
 * Return: returns NULL if the function fails
 */
char **strtow(char *str)
{
	char **q, *p = str;
	int i, j = 0;

	if (str == 0 || *str == 0)
		return (0);
	while (*p)
	{
		if (!(*p == ' ') && (*(p + 1) == ' ' || *(p + 1) == 0))
			i++;
		p++;
	}
	if (i == 0)
		return (NULL);
	q = malloc((i + 1) * sizeof(char *));
	if (q == 0)
		return (0);
	while (*str)
	{
		if (*str != ' ')
		{
			for (p = str, i = 0; *p != ' ' && *p != 0;)
				i++, p++;
			q[i] = malloc(i + 1);
			if (q[j] == 0)
			{
				while (j > 0)
					free(q[--j]);
				free(p);
				return (0);
			}
			p = q[j++];
			while (*str != ' ' && *str != 0)
				*p++ = *str++;
			*p = 0;
		}
		else
			str++;
	}
	q[j] = 0;
	return (q);
}
