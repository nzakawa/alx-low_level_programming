#include "main.h"

/**
 * cap_string - function that capitalizes words of strings
 * @str: string
 *
 * Return: 0.
 */

char *cap_string(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[0] <= 122 && str[0] >= 97)
		{
			str[0] = str[0] - 32;
		}
		if (str[j] == 32 || str[j] == 46 || str[j] == '\t' || str[j] == '\n' || str[j] == 44 || str[j] == 59 || str[j] == '!' || str[j] == '?' || str[j] == '(' || str[j] == ')' || str[j] == '{' || str[j] == '}')
		{
			if (str[j + 1] <= 122 && str[j + 1] >= 97)
			{
				str[j + 1] = str[j + 1] - 32;
			}
		}
		j++;
	}
	return (s);
}
