#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the head of the listint_t list.
 * @idx: The index of the list where the new node should be added.
 *	Index starts at 0.
 *
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 *	If it is not possible to add the new node at index idx,
 *	do not add the new node and return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int count = 0;

	if (head == NULL)
	return (NULL);
/* Create a new node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);
new_node->n = n;

if (idx == 0)
{
	/* Insert at the beginning of the list */
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
current = *head;

while (current != NULL)
	{
	if (count == idx - 1)
	{
/* Insert at the desired index */
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
	}
	current = current->next;
	count++;
}
/* Cannot add the new node at the specified index */
	free(new_node);
	return (NULL);
}
