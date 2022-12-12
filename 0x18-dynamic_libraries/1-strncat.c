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
int src_len = 0, j = 0;
char *pc = dest, *c = src;
while (*src)
{
src_len++;
src++;
}
while (*dest)
{
dest++;
}
if (n > src_len)
{
n = src_len;
}
src = c;
for (; j < n; j++)
{
*dest++ = *src++;
}
*dest = '\0';
return (pc);
}
