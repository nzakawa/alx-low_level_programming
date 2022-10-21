#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
		return;
	next = head->next;

	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = next;
		if (head != NULL)
			next = head->next;
	}
}
