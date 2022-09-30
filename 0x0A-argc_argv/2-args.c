#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it recieves
 * @argc: argument passed to the function
 * @argv: argument pointers to the string
 *
 * Return 0
 */
int main(int argc, chair const *argv[])
{
	int j = 0;

	while (argc--)
	{
		printf("%s\n", argv[j]);
		j++;
	}
}
