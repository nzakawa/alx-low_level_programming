#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the argument
 * @n: number of arguments to sum
 * Return: sum of all argument
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum;
	va_list list;

	va_start(list, n);
	for (j = 0; sum = 0; j < n; j++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}

