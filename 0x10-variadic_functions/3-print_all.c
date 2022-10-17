#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_c - prints a char
 * @form: name va_list
 *
 * Return: void
 */
void print_c(va_list form)
{
	printf("%c", va_arg(form, int));
}

/**
 * print_i - print an integer
 * @form: name va_list
 *
 * Return: void
 */
void print_i(va_list form)
{
	printf("%i", va_arg(form, int));
}

/**
 * print_f - print float numbers
 * @form: name of Va_list
 *
 * Return: void
 */

void print_f(va_list form)
{
	printf("%f", va_arg(form, double));
}

/**
 * print_s - print string
 * @form: name va_list
 *
 * Return: void
 */

void print_s(va_list form)
{
	char *ptr;

	ptr = va_arg(form, char *);
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
	print_t p[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}


