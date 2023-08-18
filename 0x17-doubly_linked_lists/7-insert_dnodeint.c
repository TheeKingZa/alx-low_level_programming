#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: Double pointer to the head of the list.
 * @idx: Index of the list where the new node should be added (starting from 0).
 * @n: Data of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    /* Declare a new node pointer and allocate memory for it */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    /* Assign data to the new node */
    new_node->n = n;

    /* If index is 0, insert at the beginning */
    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    /* Traverse the list to the desired index or end of the list */
    dlistint_t *current = *h;
    while (idx > 1 && current != NULL)
    {
        current = current->next;
        idx--;
    }

    /* If index is out of range, free new_node and return NULL */
    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Update the next and prev pointers to insert new_node */
    new_node->next = current->next;
    new_node->prev = current;
    
    /* Update the prev of the next node if it's not NULL */
    if (current->next != NULL)
        current->next->prev = new_node;
    
    /* Update the next of the current node */
    current->next = new_node;
    
    return (new_node);
}
