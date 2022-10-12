#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function that selects the correct function
 * @s: operation to perform
 *
 * Return: NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (j < 5)
	{
		if (ops[j].op[0] == s[0])
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
