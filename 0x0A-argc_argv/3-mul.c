#include <stdio.h>
#include <stdlib.h>

/**
 * main - Oprint the result of the multiplication, followed by a new line
 * @argc: integer
 * @argv: string pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
