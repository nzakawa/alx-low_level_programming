#include "lists.h"
#include <stdio.h>

/**
 *  print_listint - prints the linkedlist elements
 *  @h: head of list
 *  Return: number of nudes
 */
size_t print_listint(const listint_t *h)
{
	int j;

	j = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
