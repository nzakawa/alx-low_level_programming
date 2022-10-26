#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_loop - Counts the number of unique nodes in the loop
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
size_t print_listint_loop(const listint_t *head)
{
	size_t *ptr, *last;

	if (head == NULL)
		return (NULL);

	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (ptr = head; ptr != last; ptr = ptr->next)
			if (ptr == last->next)
				return (last->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a linked list
 *
 * @head: head of list to print
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j = 0;
	int loop;
	listint_t *node;

	note = find_listint_loop((listint_t *) head);
	for (j = 0, loop = 1; (head != node || loop) && head != NULL; j++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == node)
			loop = 0;
		head = head->next;
	}
	if (node != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (j);
}
