#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: a string pointer
 * Return: 0
 */

void rev_string(char *s)
{
char *len1, *len2, c;
int j, count;
int len3 = 0;

for (j = 0; s[j] ; j++)
{
len3++;
}

count = len3;

len1 = s;
len2 = s;
for (j = 0; j < count - 1; j++)
{
len2++;
}
for (j = 0; j < count / 2; j++)
{
c = *len2;
*len2 = *len1;
*len1 = c;

len1++;
len2--;
}
}
