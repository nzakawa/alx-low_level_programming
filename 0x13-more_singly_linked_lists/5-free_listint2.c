#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint list
 *
 * @head: head of list to free
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *i, *j;

	if (head == NULL || *head == NULL)
		return;
	i = *head;
	while (a)
	{
		j = i;
		i = i->next;
		free(j);
	}
	*head = NULL;
}
