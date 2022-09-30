#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: Number of  arguments
 *  @argv: Array name
 *  * Return: 1 if passed otherwise 0
 */
int main(int argc, char *argv[])
{
	int j = 0;
	int total = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (j = 1; j < argc; j++)
		{
			if (!isdigit(*argv[j]))
			{
				printf("Error\n");
			}
			else
			{
				total += atoi(argv[j]);
			}
		}
		printf("%d\n", total)
	}

	return (0);
}
