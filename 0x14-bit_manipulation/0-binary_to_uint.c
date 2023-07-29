#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary number as a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if an invalid character is found or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int index = 0;

    if (b == NULL)
        return 0;

    while (b[index] != '\0')
    {
        if (b[index] != '0' && b[index] != '1')
            return 0;

        result = (result << 1) | (b[index] - '0');
        index++;
    }

    return (result);
}
