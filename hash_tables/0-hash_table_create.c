#include "hash_tables.h"

/**
 * *hash_table_create - create hash table
 * @size: the size of the hash table
 * Return:a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_node_t));
	if (ht == NULL)
		return (-1);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NUll)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
}
