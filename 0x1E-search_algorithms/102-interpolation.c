#include "search_algos.h"

/**
 * interpolation_search - Function that searches for a value
 *                        in a sorted array of integers
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t low, high, pos;

/* Check for NULL array or empty size */
if (array == NULL || size == 0)
return (-1);

/* Initialize low and high for interpolation formula */
low = 0;
high = size - 1;

/* Perform the interpolation search */
while (low <= high && value >= array[low] && value <= array[high])
{
/* Calculate the probe position using interpolation formula */
pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

/* Print the current element being checked */
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

/* Check if the value is found */
if (array[pos] == value)
return (pos);

/* Update low or high based on comparison results */
if (array[pos] < value)
low = pos + 1;
else
high = pos - 1;
}

/* Print the value not found message */
printf("Value checked array[%lu] is out of range\n", pos);

/* Value not found in the array */
return (-1);
}
