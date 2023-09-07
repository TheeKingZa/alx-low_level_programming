#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: The hash table to search in.
 * @key: The key to look up.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	/* Get the index */

	current = ht->array[index];
	/* Traverse the list at the index */

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
	/* Return the value if key is found */
	current = current->next;
	}

return (NULL);
/* Key not found */
}
