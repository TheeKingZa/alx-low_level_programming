#include <stdio.h>

/**
 * advanced_binary_recursive - Recursive function to perform advanced binary search.
 * @array: Pointer to the first element of the array.
 * @left: Left index of the current subarray.
 * @right: Right index of the current subarray.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of the value, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
size_t mid, i;

/* Check if the left index is less than or equal to the right index */
if (left <= right)
{
/* Calculate the middle index */
mid = left + (right - left) / 2;

/* Print the current array or subarray being searched */
printf("Searching in array: ");

for (i = left; i <= right; i++)
{
if (i == right)
printf("%d\n", array[i]);
else
printf("%d, ", array[i]);
}

/* Check if the middle element is the value */
if (array[mid] == value)
{
/* Check if the current middle element is the first occurrence */
if (mid == left || array[mid - 1] < value)
return (mid); /* Found the first occurrence */
else
return (advanced_binary_recursive(array, left, mid - 1, value));
}
/* If the value is in the right half, search in that half */
else if (array[mid] < value)
return (advanced_binary_recursive(array, mid + 1, right, value));
/* If the value is in the left half, search in that half */
else
return (advanced_binary_recursive(array, left, mid - 1, value));
}

/* Value not found in the array */
return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array using advanced binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of the value, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
/* Check for NULL array or empty size */
if (!array || size == 0)
return (-1);

/* Call the recursive helper function */
return (advanced_binary_recursive(array, 0, size - 1, value));
}
