#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that searches for a value
 *               in a sorted array of integers
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i, step, jump;

    /* Check for NULL array or empty size */
    if (array == NULL || size == 0)
        return (-1);

    /* Determine the step size for jumping */
    step = sqrt(size);

    /* Perform the jump search */
    for (i = jump = 0; jump < size && array[jump] < value;)
    {
        /* Print the current element being checked */
        printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
        /* Update the last valid index and jump to the next step */
        i = jump;
        jump += step;
    }

    /* Print the range where the value is found */
    printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

    /* Ensure the last jump does not exceed the array size */
    jump = jump > size - 1 ? jump : size - 1;

    /* Continue linear search within the identified range */
    for (; i < jump && array[i] < value; i++)
        /* Print the current element being checked */
        printf("Value checked array [%ld] = [%d]\n", i, array[i]);

    /* Print the last element checked */
    printf("Value checked array [%ld] = [%d]\n", i, array[i]);

    /* Check if the value is found and return the index */
    return (array[i] == value ? (int)i : -1);
}
