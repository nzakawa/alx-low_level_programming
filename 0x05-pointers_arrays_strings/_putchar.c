#include <unistd.h>

/**
 * _putchar - this writes the character c to stdout
 * @c: The character to be printed
 * Return: Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
