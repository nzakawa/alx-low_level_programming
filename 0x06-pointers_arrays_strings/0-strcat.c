#include "main.h"

/**
 * _strcat - concatenating two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return 0;
 */

char *_strcat(char *dest, char *src)
{
	int x = -1;
	int y;

	for (y = 0; dest[y] != '\0' y++)
	;
	do {
		x++;
		desh[y] = src[x];
		y++;
	} while (src[x] != '\0')

	return (dest);
}
