#include "hash_tables.h"

/**
 * key_index - Computes the index for a given key in a hash table.
 *
 * @key: The key for which to calculate the index.
 * @size: The size of the hash table's array.
 *
 * Return: The computed index where the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
/* Calculate the hash value */

/* Calculate index by taking the remainder of hash value and size */
	unsigned long int index = hash_value % size;

	return (index);
}
