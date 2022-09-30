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
(void)argc;

if (argc != 3)
{
	print("Erro\n");
	return (1);
}
print("%\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
