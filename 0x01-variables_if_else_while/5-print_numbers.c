#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints single digit numbers using the `int' function
 *
 * Return: 0 (error code)
 */
int main(void)
{
				int i;
				/*space after declaration*/
				for (i = 0; i < 10; i++)
				{
				putchar(i + '0');
				}
				putchar('\n');

				return (0);
/*Return 0 success*/
}
