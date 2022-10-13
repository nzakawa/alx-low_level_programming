#ifndef VARIADIC_FUNCTIONSH
#define VARIADIC_FUNCTIONSH
#include <stdarg.h>

/**
 * struct print - print function
 * @p: print type
 * @: print function
 */
typedef struct print
{
	char *p;
	void (*f)(va_list);
} print_p;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTIONSH*/
