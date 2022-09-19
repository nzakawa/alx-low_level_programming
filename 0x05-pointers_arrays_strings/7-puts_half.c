#include "main.h"

/**
 * puts_half - function thta prints second half of string
 * @str: this is an aarray string type
 * Return 0
 */
void puts_half(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
	;
x++;
for (x /= 2; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
