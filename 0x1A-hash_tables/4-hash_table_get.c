#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: (The value associated with the element), or (NULL) if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *current;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
/* Invalid input or empty key*/

index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];

while (current != NULL)
{
if (strcmp(current->key, key) == 0)
return (current->value);
/* Found the key, return its value*/
current = current->next;
}
return (NULL);
/* Key not found */
}
