#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of linked list
 * @h: haed iof list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int j;

	tmp = h;
	for (j = 0; tmp; j++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (j);
}
