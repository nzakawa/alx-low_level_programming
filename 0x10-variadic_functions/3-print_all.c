#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_c - prints a char
 * @list: name va_list
 *
 * Return: void
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_i - print an integer
 * @list: name va_list
 *
 * Return: void
 */
void print_i(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_f - print float numbers
 * @list: name of Va_list
 *
 * Return: void
 */

void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_s - print string
 * @list: name va_list
 *
 * Return: void
 */

void print_s(va_list list)
{
	char *ptr;

	ptr = va_arg(list, char *);
	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}

/**
 * print_all - check the code for Holberton School students
 * @format: number of arguments in character format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list list;
	char *separator = "";

	f p[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		};

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (p[j].print[0] == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				p[j].f(list);
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}


