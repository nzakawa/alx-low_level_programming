#include "main.h"

/**
 * str_recursion - function that return lenght of string
 * @s: string
 *
 * Return: str length
 */
int str_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_recursion(s + 1));
}

/**
 * _palindrome - check if string is palindrome
 * @p1: palindrome
 * @s: string
 * @p2: position
 * Return: 1 if palindrome 0 if not
 */

int _palindrome(int p1, int s, char *p2)
{
	if (p1 >= s)
		return (1);
	else if (p2[p1] != p[s])
		return (0);
	else
		return (_palindrome(p1 + 1, s - 1, p2));
}

/**
 * is_palindrome - states if string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int j;

	j = str_recursion(s) - 1;
	return (_palindrome(0, j, s));
}
