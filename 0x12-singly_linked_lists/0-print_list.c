#include "list.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of linked list
 * @h: haed of list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t j;

	j = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}

