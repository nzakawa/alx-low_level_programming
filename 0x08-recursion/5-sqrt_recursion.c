#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a n
 * @n: integer
 * @m: square value
 */

int _sqrt_recursion(int n)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (square(n, m + 1));
	else
		return (-1);
}
