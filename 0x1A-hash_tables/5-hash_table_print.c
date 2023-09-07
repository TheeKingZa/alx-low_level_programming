#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int first = 1;
/* Flag to check if it's the first element */

	if (ht == NULL)
		return;

printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

	while (current != NULL)
		{
		if (first)
			first = 0;
		/* Don't print comma before the first element */
		else
			printf(", ");

		printf("'%s': '%s'", current->key, current->value);
		current = current->next;
		}
	}
	printf("}\n");
}
