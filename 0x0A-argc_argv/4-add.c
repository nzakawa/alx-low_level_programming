#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: Number of  arguments
 *  @argv: Array name
 *  * Return: 1 if passed otherwise 0
 */
int main(int argc, char *argv[])
{
	int n, m, len, sum;
	char *p;

	if (argc < 2)
		printf("\0");
	else
	{
		sum = 0;
		for (n = 1; n < argc; n++)
		{
			p = argv[n];
			len = strlen(p);

			for (m = 0; m < len; m++)
			{
				if (isdigit(*(p + m)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[n]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
