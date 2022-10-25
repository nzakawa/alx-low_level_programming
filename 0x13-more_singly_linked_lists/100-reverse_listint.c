#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	current = NULL;

	while ((*head)->next != NULL)
	{
		previous = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = previous;
	}

	(*head)->next = current;

	return (*head);
