#include "main.h"
#include <stdio.h>

/**
 * print_array - fumction that prints an array of numbers
 * @a: integer array
 * @n: integer number
 * Return: 0
 */

void print_array(int *a, int n)
{
int j;

j = 0;
for (n--; n >= 0; n--, j++)
{
printf("%d", a[j]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}

