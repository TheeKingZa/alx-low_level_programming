#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 *			of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int count = 0;

if (head == NULL || *head == NULL)
	return (-1);

current = *head;

if (index == 0)
{
/* Delete the first node */
	*head = (*head)->next;
	free(current);
	return (1);
}
while (current != NULL)
{
	if (count == index - 1)
	{
/* Delete the node at the desired index */
	if (current->next == NULL)
	return (-1);
/* Cannot delete node, index out of range */
	temp = current->next;
	current->next = temp->next;
	free(temp);
return (1);
	}
	current = current->next;
	count++;
	}
return (-1); /* Cannot delete node, index out of range */
}

