#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, carry, sum;

r[size_r - 1] = '\0';
carry = 0;
k = size_r - 2;

for (i = strlen(n1) - 1, j = strlen(n2) - 1; i >= 0 || j >= 0; i--, j--, k--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

if (sum >= 10)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}

if (k < 0)
return (0);

r[k] = sum + '0';
}

if (carry == 1 && k < 0)
return (1);

if (carry == 1)
{
r[k] = '1';
return (&r[k]);
}

return (&r[k + 1]);
}
