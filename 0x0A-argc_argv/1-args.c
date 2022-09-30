#include <stdio.h>

/**
 * main - This programprints the number of argument
 * @argc: argument passed to fucntion
 * @argv: argument to pointer string
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	argv[0] = "";
	return (0);
}

