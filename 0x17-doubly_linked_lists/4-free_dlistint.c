#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	/* Iterate through the list, freeing each node */
	while (current != NULL)
	{
		next = current->next; /* Store the next node before freeing node */
		free(current); /* Free the current node */
		current = next; /* Move to the next node */

	}
}
