#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a n
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * _sqrt_recursion - function that finds square root of a n
 * @n: integer
 * @m: square value
 * Return: integer
 */

int square(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (square(n, m + 1));
	else
		return (-1);
}
