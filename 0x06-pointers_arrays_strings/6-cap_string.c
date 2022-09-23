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

while (s[j])
{
if (j == 0 && ([j] >= 'a' && s[j] <= 'z'))
{
s[j] -= 32;
}
if (check_separators(s[j] && (s[j + 1] >= 'a' && s[j + 1] <= 'z'))
{
s[j + 1] -= 32;
}
j++;
}
return (s);
}
/**
 * check_separators - this are separators
 * @c: character to be inputed
 * Return 1 otherwise 0.
 */
int check_separators(char c)
{
int j = 0;

char separator[13] = {' ', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };
for (; j <= 13; j++)
{
if (c == separators[j])
{
return (1);
}
}
return (0);
}

