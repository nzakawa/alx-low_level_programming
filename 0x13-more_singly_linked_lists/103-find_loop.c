#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *last;

	ptr = last = head;
	while (ptr && last && last->next)
	{
		ptr = ptr->next;
		last = last->next->nest;
		if (ptr == last)
		{
			ptr = head;
			break;
		}
	}
	if (!ptr || !last || !last->next)
		return (NULL);
	while (ptr != last)
	{
		ptr = ptr->next;
		last = last->next;
	}
	return (last);
}
