#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of linked list
 * @h: haed iof list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	unsigned int j;

	ptr = h;
	for (j = 0; ptr; j++)
	{
		printf("[%u} %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (j);
}
