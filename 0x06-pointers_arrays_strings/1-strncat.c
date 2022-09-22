#include "main.h"

/**
 * _strncat - function to concatenatr two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of byte
 * Return: 0;
 */
char *_strncat(char *dest, char *src, int n)
{
int src_len = 0;
int j = 0;
char *pc = dest;
char *c = src;
while (*dest)
{
dest++;
}
while (*src)
{
src++;
src_len++;
}
if (n > src_len)
{
n = src_len;
}
src = c;
for (j < n; j++)
{
*src++ = *dest++;
}
*src = '\0';
return (c);
}
