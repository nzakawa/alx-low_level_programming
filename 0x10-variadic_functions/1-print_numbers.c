#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: use to separate numbers
 * @n: number of argument to sum
 *
 * Return: sum of all argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	int number;
	va_list list;

	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		number = va_arg(list, int);
		printf("%d", number);
		if (j < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
