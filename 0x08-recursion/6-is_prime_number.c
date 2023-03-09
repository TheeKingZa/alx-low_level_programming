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
/* Base case: If n is less than or equal to 1, return 0 (not prime). */
if (n <= 1)
return (0);

				/* Base case: If n is 2 or 3, return 1 (prime). */
if (n == 2 || n == 3)
return (1);

				/* Base case: If n is even or divisible by 3, return 0 (not prime). */
if (n % 2 == 0 || n % 3 == 0)
return (0);

/* Recursive case: Check if n is divisible by any odd number greater than 3. */
int i;
for (i = 5; i * i <= n; i += 2)
{
if (n % i == 0 || n % (i + 2) == 0)
return (0);
}

/* If no factors are found, n is prime. */
return (1);
}
