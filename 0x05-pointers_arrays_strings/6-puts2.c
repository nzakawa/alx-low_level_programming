#include "main.h"
/**
 * puts2 - function that prints each string character
 * @str: pointer to the string
 * Return: 0
 */

void puts2(char *str)
{
int x, y;

x = strx(str);
for (y = 0; y < x; y += 2)
_putchar(str[x]);
_putchar('\n');
}
