#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: Pointer to the hash table
 * @key: The key to add - must be a non empty str
 * @value: The value corresponding to the key
 * Return: return 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_cpy;
	unsigned long int i, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (!value_cpy)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = value_cpy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(value_cpy);
		return (0);
	}
	new->key = strdup(key);
	if (!(new->key))
	{
		free(new);
		return (0);
	}
	new->value = value_cpy;
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
