#include "main.h"

/**
 * *rot13 - functions that encodes string using rot13
 * @s: pointer
 * Return: 0
 */

char *rot13(char *s)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 54; j++)
		{
	if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A')) && s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}
	return (s);
}
