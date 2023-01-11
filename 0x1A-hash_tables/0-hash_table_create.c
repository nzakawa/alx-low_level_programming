#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned long int idx;

	if (size == 0)
		return (NULL);
	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}

	newtable->size = size;
	for (idx = 0; idx < size; idx++)
		newtable->array[idx] = NULL;
	return (newtable);
}
