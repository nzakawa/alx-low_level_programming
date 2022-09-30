#include <stdio.h>
#include <stdlib.h>

/**
 * main - Oprint the result of the multiplication, followed by a new line
 * @argc: integer
 * @argv: string pointer
 * Return: 0
 */


int main(int argc, char const *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
