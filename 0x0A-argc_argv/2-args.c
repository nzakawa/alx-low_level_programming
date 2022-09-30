#include <stdi0.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument passed to the function
 * @argv: argument pointers to the string
 *
 * Return 0
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
