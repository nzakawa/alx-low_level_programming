#include "main.h"

/**
 * reverse_array - function that reverses an array of integers
 * @a: array pointer
 * @n: number of element
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int j = 0, half;

	n = n - 1;
	while (j <= n)
{
	half = a[j];
	a[j++] = a[n];
	a[n--] = half;
}
}
