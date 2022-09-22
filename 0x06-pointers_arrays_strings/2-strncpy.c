#include "main.h"

/**
 * _strncpy - function that copies strings
 * @dest: destination pointer
 * @src: search poiter
 * @n: integer number
 * Return: 0;
 */
char *_strncpy(char *dest, char *src, int n)
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
src_len++;
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

