#include "main.h"

/**
 * leet - functions that encode the string
 * @str: string to be encoded
 * Return: 0.
 */
char *leet(char *str)
{
	int j = 0, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (; str[j] != '\0'; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s1[k] == str[j])
			{
				str[j] = s2[k];
			}
		}
	}
	return (str);
}


