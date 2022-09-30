#include "main.h"

/**
 * str_recursion - function that return lenght of string
 * @s: string
 *
 * Return: str length
 */
int str_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += str_recursion(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - states if string is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int j = str_recursion(s);

	return (_palindrome(s, 0, j - 1, j % 2));
}

/**
 * _palindrome - check if string is palindrome
 * @p1: palindrome
 * @s: string
 * @p2: position
 * Return: 1 if palindrome 0 if not
 */

int _palindrome(int p1, int s, int s1, char *p2)
{
	if ((p1 == s && s1 != 0) || (p1 == s + 1 && s1 == 0))
		return (1);
	else if (p2[p1] != p2[s])
		return (0);
	else
		return (_palindrome(p2, p1 + 1, s - 1, s1));
}
