#include "main.h"
/**
 * _isalpha - fucnction that checks alphabet
 * @x: single letter input
 * Return: 1 for lowercase otherwise 0
 */
int _isalpha(int x)
{
	if (((x >= 'a') && (x <= 'z')) || ((x >= 'A') && (x <= 'Z')))
		return (1);
	else
		return (0);
}
