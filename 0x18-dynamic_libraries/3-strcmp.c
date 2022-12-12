#include "main.h"

/**
 * _strcmp - functions that compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
int j;

for (j = 0; s1[j] != '\0'  && s1[j] != '\0'; j++)
{
	if (s1[j] != s2[j])
	{
	return (s1[j] - s2[j]);
	}

}
	return (0);
}

