#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at position
 * @head: start of list
 * @idx: index to add node to
 * @n: value to assign
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *node;

	if (head == NULL)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);

	node->next = NULL;
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		(*head) = node;
		return (node);
	}

	current = *head;

	while (idx != 1)
	{
		current = current->next;
		--idx;
		if (current == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = current->next;
	current->next = node;

	return (node);
}
