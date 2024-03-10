#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints standard error using the `sizeof()` function
 *
 * Return: 0 (Success code)
 */
int main(void)
{
/* Print the size of a char */
printf("Size of a char: %ld byte(s)\n", sizeof(char));
/*  Print the size of an int */
printf("Size of an int: %ld byte(s)\n", sizeof(int));
/* Print the size of a long int */
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
/* Print the size of a long long int */
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
/* Print the size of a float */
printf("Size of a float: %ld byte(s)\n", sizeof(float));
/* Return 0 to indicate successful execution */
return (0);
}
