#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
char password[7];
int i, ascii_value;

/* Seed the random number generator with the current time */
srand(time(NULL));

/* Generate a random password */
for (i = 0; i < 7; i++)
{
/* Generate a random ASCII value between 33 and 126 */
ascii_value = rand() % (126 - 33 + 1) + 33;

/* Ensure the password contains at least one digit */
if (i == 3)
ascii_value = rand() % 10 + '0';

/* Store the character in the password array */
password[i] = (char)ascii_value;
}

/* Print the generated password */
printf("%s\n", password);

return (0);
}
