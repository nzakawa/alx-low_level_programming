#include "main.h"
/**
 * print_rev - fuctions the prints string in reverse
 * @s: pointer the string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
int j = 0;

while (s[j] != '\0')
{
j++;
}
for (j = j - 1 ; j >= 0; 1--)
{
_putchar(s[j]);
}
_putchar('\n');
}
