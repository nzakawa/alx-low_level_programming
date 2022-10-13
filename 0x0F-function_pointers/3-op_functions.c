#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - return the suma of a and b
 * @a: int type Integer
 * @b: int type Intger
 * Return: add sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract b from a
 * @a: int type Integer
 * @b: int type Intger
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: int type Integer
 * @b: int type Intger
 *
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: int type Integer
 * @b: int type Intger
 *
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the remainder of division of a by b
 * @a: int type Integer
 * @b: int type Intger
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
