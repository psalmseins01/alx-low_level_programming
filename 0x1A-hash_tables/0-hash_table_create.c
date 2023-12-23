#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: argument for the size
 * Return: returns a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_created;
	unsigned long int j;

	table_created = malloc(sizeof(hash_table_t));

	if (!table_created)
		return (NULL);

	table_created->size = size;
	table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (!table_created->array)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		table_created->array[j] = NULL;
	}

	return (table_created);
}
