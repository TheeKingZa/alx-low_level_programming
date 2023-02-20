#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* in ascending order, separated by ", " using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
				int num;
				/* declare variable to hold single-digit number */
				for (num = 0; num < 10; num++)
					/* loop through numbers 0-9 */
				{
					putchar(num + '0');
					/* print the number as a character */
					if (num != 9)
						/* if the number is not 9 */
					{
						putchar(',');
						/* print comma */
						putchar(' ');
						/* print space */
					}
				}
				putchar('\n');
				/* print newline */
				return (0);
/*Return 0 Success*/
}
