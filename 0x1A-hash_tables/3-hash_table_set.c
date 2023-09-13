#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key/value to.
 * @key: The key, a non-empty string.
 * @value: The value associated with the key, can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
/*Invalid input or empty key*/

unsigned long int index = key_index((const unsigned char *)key, ht->size);
hash_node_t *new_node = malloc(sizeof(hash_node_t));

if (new_node == NULL)
return (0);
/* Memory allocation failed*/

new_node->key = strdup(key);
new_node->value = strdup(value);

if (new_node->key == NULL || new_node->value == NULL)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (0);
/* Memory allocation failed*/
}

new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
/* Success*/
}
