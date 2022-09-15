#include <unisd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: character
 * Return: On success 1.
 * On erro, -1 is returned, and errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
