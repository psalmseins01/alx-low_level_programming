#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value is stored
 * @key: The key to get the index
 * @size: The size of the array of the hash table
 * Return: return the index of the key
 * Description: Uses the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
