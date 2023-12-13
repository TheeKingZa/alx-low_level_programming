#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - Perform linear search on an array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the found value, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    /* Check for NULL array or empty size */
    if (!array || size == 0)
        return (-1);

    /* Iterate through the array */
    while (i < size)
    {
        /* Print the current element being checked */
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        /* Check if the current element matches the desired value */
        if (array[i] == value)
            return (i);

        /* Move to the next element */
        i++;
    }

    /* Value not found in the array */
    return (-1);
}
