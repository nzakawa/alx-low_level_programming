#include "main.h"

/**
 * _atoi - function that convert string to integer
 * @s: string type
 * Return: integer
 */

int _atoi(char *s)
{
	int j;
	int k;
	int sig = 1;
	int rsp = 0;

for (j = 0; !(s[j] >= 48 && s[j] <= 57); j++)
{
	if (s[j] == '-')
	{
	sig *= -1;
	}
}
for (k = j; s[k] >= 48 && s[k] <= 57; k++)
{
	rsp = rsp * 10;
	rsp = rsp + (s[k] - 48);
}
	rsp = rsp * sig;
	return (rsp);
}


