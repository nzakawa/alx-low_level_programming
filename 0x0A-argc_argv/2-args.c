#include <stdio.h>

/**
 * main - this function prints name
 * @argc: argument to number
 * @argv: argument array
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
