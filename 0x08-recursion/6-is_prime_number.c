#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if a number is prime.
 *
 * @n: the number to check.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
int i;

/* Corner cases */
if (n <= 1)
return (0);

/* Check for divisibility from 2 to n/2 */
for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
return (0);
}
/* If no divisor is found, n is prime */
return (1);
}
