#include "main.h"

/**
 * *string_toupper - function that changes lowercase to uppercase string
 * @s: string
 * Return: 0
 */
char *string_toupper(char *s)
{
int j = 0;
while (s[j] != '\0')
{
	if ((s[j] >= 97) && (s[j] <= 122))
	{
		s[j] = s[j] - 32;
	}
	j++;
}
return (s);
}
