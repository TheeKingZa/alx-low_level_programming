#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: string contain binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_value = 0;
int str_len = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
dec_value += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (dec_value);
}

/**
 * chck_valid_str - checks a string if it has only 0's and 1's
 * 
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int chck_valid_str(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}
