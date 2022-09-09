#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * Return: 0
 */

int main(void)
{
	char l_letter = 122;

	while (l_letter >= 97)
	{
		putchar(l_letter);
		l_letter--;
	}

	putchat('\n');

	return (0);
}
