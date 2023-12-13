#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted
 * 			array using exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the found value, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t mid, left, right, bound;
/* Check for NULL array or empty size */
if (!array || size == 0)
return (-1);

/* Find range for binary search */
bound = 1;
while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

/* Perform binary search within the found range */
left = bound / 2;
right = (bound < size) ? bound : size - 1;

/* Binary search */
while (left <= right)
{
mid = left + (right - left) / 2;

printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

/* Value not found in the array */
return (-1);
}
