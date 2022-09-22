#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer destination
 * @src: source destination
 * Return: 0;
 */

char *_strcat(char *dest, char *src)
{
	int x = -1;
	int y;

	for (y = 0; dest[y] != '\0' y++)
	;

	do {
		x++;
		dest[y] = src[x];
		y++;
	} while (src[x] != '\0')

	return (dest);
}
