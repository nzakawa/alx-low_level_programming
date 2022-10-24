#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: index of the node to return
 *
 * Return: pointer to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j != index; j++)
	{
		head  head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
