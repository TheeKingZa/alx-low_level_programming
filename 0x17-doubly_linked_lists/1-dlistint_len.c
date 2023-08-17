#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t linked list.
 * @h: Pointer to the head of the dlistint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* Traverse the list and count each element */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
