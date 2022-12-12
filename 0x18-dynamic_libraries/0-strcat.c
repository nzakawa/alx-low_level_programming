#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer destination
 * @src: source destination
 * Return: 0;
 */

char *_strcat(char *dest, char *src)
{
char *j = dest;
while (*dest)
{
dest++;
}
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return (j);
}
