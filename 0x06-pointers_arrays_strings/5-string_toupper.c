#include "main.h"

/**
 * *string_toupper - function that changes lowercase to uppercase string
 * @s: string
 * Return: 0
 */
char *string_toupper(char *s)
{
char *pc = s;

while (*s)
{
if (*s >= 'a' && *s <= 'z')
{
*s -= 32;
}
s++
}
return (cp);
}
