#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Perform binary search on a sorted array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the found value, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1;

    while (left <= right)
    {
        size_t mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            if (i == right)
                printf("%d\n", array[i]);
            else
                printf("%d, ", array[i]);
        }

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
