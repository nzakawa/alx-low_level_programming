
#include <stdio.h>

/**
 * main - print alphabet in lowercase whiout q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char l_letter = 'a';

	while (l_letter <= 'z')
	{
		if (!(l_letter = = 'e' || l_letter == 'q'))
		{
			putchar(l_letter);
		}

		l_letter++;
	}

	putchar('\n');

	return (0);
}

