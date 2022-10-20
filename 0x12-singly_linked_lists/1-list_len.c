#include "lists.h"
#include <stdio.h>

/**
 * list_len - check the code for Holberton School students
 *  @h: name of the list
 *  Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
