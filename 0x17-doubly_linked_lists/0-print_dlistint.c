#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -  This function prints all elements of a dlistint_t list
 *
 * @h: the pointer to 1st node.
 *
 * Return: count, the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	/* Initialize the node count */

	/* Traverse the list and print each element */

	/* dlistint_t *h = head; */
	/* Assuming head is a global variable */

	while (h != NULL)
		{
		printf("%d\n", h->n);
		h = h->next;
		count++;
		}

	return (count);
}
