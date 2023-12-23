#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned int i;

	if (ht)
	{
		ht->array = malloc(size * sizeof(hash_node_t));
		if (ht->array == NULL)
		{
			free(ht);
			return (NULL);
		}
		ht->size = size;
		for (i = 0; i < size; i++)
			ht->array[i] = NULL;
	}
	return (ht);
}
