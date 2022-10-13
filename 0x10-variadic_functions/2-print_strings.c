#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: item to use to separate the numbers
 * @n: number of argument
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *ptr;
	va_list list;

	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		ptr = va_arg(list, char *);
		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (j < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
