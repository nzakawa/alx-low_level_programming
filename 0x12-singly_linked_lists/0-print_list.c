#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of linked list
 * @h: haed of list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	const list_t *tmp;
	unsigned int j;

	tmp = h;
	for (i = 0; tmp; j++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (j);
}
