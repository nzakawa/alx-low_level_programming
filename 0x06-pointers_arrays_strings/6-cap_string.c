#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes words of strings
 * @s: string
 *
 * Return: 0.
 */

char *cap_string(char *s)
{
	int j = 0;

	while (s[++j])
	{
		while (!(s[j] >= 'a' && s[j] <= 'z'))
			j++;
		if (s[j - 1] == ' ' ||
				s[j - 1] == '\t' ||
				s[j - 1] == '\n' ||
				s[j - 1] == ',' ||
				s[j - 1] == ';' ||
				s[j - 1] == '.' ||
				s[j - 1] == '!' ||
				s[j - 1] == '?' ||
				s[j - 1] == '"' ||
				s[j - 1] == '(' ||
				s[j - 1] == ')' ||
				s[j - 1] == '{' ||
				s[j - 1] == ')' ||)
			s[j] -= 32;
	}
		return (s);
}
