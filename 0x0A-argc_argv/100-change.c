#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int naira, coins = 0;

	if (argc != 2)
	{
		printf(""Error\n);
		return (1);
	}

	naira = atoi(argv[1]);
	while (naira >= 25)
	{
		coins++;
		naira -= 25;
	}
	while (naira >= 10)
	{
		coins++;
		naira -= 10;
	}
	if (naira >= 5)
	{
		coins++;
		naira -= 5;
	}
	while (naira >= 2)

	{
		coins++;
		naira -= 2;
	}
	if (naira == 1)
		coins++;
	printf("%d\n", naira);
	return (0);
}


