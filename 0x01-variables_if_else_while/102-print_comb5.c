#include <stdio.h>
/**
* main - prints all possible combinations of two two-digit numbers
*
* Return: 0 Success
*/
int main(void)
{
				int i, j;
/* loop through all possible first two-digit numbers (00 to 99) */
				for (i = 0; i < 100; i++)
				{
/* loop through all possible second two-digit numbers (00 to 99) */
				for (j = 0; j < 100; j++)
				{
/* check if the combination is unique and in ascending order */
				if (i < j)
				{
/* print the first two-digit number with leading zero if necessary */
				if (i < 10)
				{
				putchar('0');
				putchar(i + '0');
				}
				else
				{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				}
/* print the separator between the two numbers */
				putchar(' ');
				putchar(' ');
/* print the second two-digit number with leading zero if necessary */
				if (j < 10)
				{
				putchar('0');
				putchar(j + '0');
				}
				else
				{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				}
/* if not the last pair, print comma and space */
				if (i < 99)
				{
				putchar(',');
				putchar(' ');
				}
				}
				}
				}
/* print a newline character at the end */
				putchar('\n');
				return (0);
/*Return 0 Success*/
}
