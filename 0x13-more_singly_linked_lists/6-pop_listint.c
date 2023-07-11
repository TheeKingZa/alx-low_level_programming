#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
/* If the list is empty */
	return (0);

	data = (*head)->n;
/* Store the data of the head node */
	temp = *head;
/* Assign the head node to a temporary pointer */
	*head = (*head)->next;
/* Update the head to the next node */
	free(temp);
/* Free the memory of the previous head node */

	return (data);
/* Return the data of the deleted head node */
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;

free(temp);

return (data);
}
