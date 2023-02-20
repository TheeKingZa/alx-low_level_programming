#include <stdio.h>
/**
* main - prints all "possible" different combinations of 'three digits'
*
* Return: 0 on success
*/
int main(void)
{
				int i, j, k;
/* loop through all possible first digits (0 to 7) */
				for (i = 0; i < 8; i++)
				{
/* loop through all possible second digits (i+1 to 8) */
				for (j = i + 1; j < 9; j++)
				{
/* loop through all possible third digits (j+1 to 9) */
				for (k = j + 1; k <= 9; k++)
				{
/* print the three digits */
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
/* if not the last set, print comma and space */
				if (i < 7)
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
