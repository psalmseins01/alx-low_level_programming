#include "./hash_tables.h"

/**
 * hash_table_print - Function to print hash table
 * @ht: A pointer to the hash table to print
 * Description: print the Key/value in order
 * Return: return void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned char coma_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (coma_flag == 1)
				printf(", ");

			node = ht->array[index];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			coma_flag = 1;
		}
	}
	printf("}\n");
}
