#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: number to add
 * Return: nodes address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);

	new_node->n = n;
	new_now->next = *head;
	*head = new_node;
	return (*head);
}

