#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a new hash table
 * @size: size of array
 * Return: pointer to new hash table if nothing went wrong else, NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (!new_ht)
		return (NULL);

	new_ht->array = malloc(sizeof(hash_node_t) * size);
	if (!new_ht->array)
		return (NULL);

	new_ht->size = size;
	return (new_ht);
}
