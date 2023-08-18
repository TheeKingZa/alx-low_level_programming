#include "lists.h"

/**
 * sum_dlistint - Sum of all the data
 *
 * @head: Double pointer to the head of the list.
 *
 * Return: If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	/* Initialize a variable to store the sum */
	int sum = 0;

	/* Declare a pointer for iterating through the list */
	dlistint_t *current;

	/* Iterate through the list and calculate the sum */
	for (current = head; current != NULL; current = current->next)
	{
	/* Add the value of the current node to the sum */
	sum += current->n;
	}

	/* Return the calculated sum */
	return (sum);
}
