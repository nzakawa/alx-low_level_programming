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
	int ans, n1, n2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	n1 = argv[1];
	n2 = argv[2];
	ans = n1 * n2;

	printf("%d\n", ans);
	return (0);
}
