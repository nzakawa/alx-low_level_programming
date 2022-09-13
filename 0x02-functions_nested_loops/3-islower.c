#include "main.h"

/**
 * _islower - prints fuction that check lowercase
 * @x: single letter input
 * Return: 1 if lowercase. otherwise 0
 */
int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);
}
