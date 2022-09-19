#include "main.c"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed by src
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: string which will be copied
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
int j = -1;

do {
j++;
dest[j] = src[j];
} while (src[j] != '\0');

return (dest);
}
