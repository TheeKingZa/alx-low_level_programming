#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0; /* Initialize the count to zero */

while (h != NULL) /* Loop until the end of the list */
{
if (h->str == NULL) /* If the string is NULL, print [0] (nil) */
printf("[0] (nil)\n");
else /* Otherwise, print the length and the string */
printf("[%d] %s\n", h->len, h->str);

h = h->next; /* Move to the next node */
count++; /* Increment the count */
}

return (count); /* Return the final count */
}
