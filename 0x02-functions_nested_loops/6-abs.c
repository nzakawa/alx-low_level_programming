#include "main.h"
/**
 * _abs - function to compute absolute value
 * @p: absolute value of p
 * Return: absolute value of p
 */
int _abs(int p)
{
	return (p * ((p > 0) - (p < 0)));
}
