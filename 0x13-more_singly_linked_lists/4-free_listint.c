#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}

