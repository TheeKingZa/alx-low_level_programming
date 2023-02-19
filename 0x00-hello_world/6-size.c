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
				printf("Size of a char:%lu byte(s)\n", sizeof(char));
				printf("Size of an int:%lu byte(s)\n", sizeof(int));
				printf("Size of a long int:%lu byte(s)\n", sizeof(long int));
				printf("Size of a long long int:%lu byte(s)\n", sizeof(long long int));
				printf("Size of a float:%lu byte(s)\n", sizeof(float));
				return (0);
/*Return 0 Success Code*/
}
