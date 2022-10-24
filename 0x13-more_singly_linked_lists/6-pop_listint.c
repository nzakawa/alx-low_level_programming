#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: value of node, or 0 if list empty
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int j;

	if (head == NULL || *head == NULL)
		return (0);
	node = *head;
	*head = node->next;
	j = node->n;
	free(node);
	return (j);
}

