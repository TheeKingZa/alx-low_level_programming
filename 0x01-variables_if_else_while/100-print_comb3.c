#include <stdio.h>
/**
* main - prints all "possible" different combinations of 'two digits'
*
* Return: 0 on success
*/
int main(void)
{
				int i, j;
				/* loop through all possible first digits (0 to 8) */
				for (i = 0; i < 9; i++)
				{
					/* loop through all possible second digits (i+1 to 9) */
					for (j = i + 1; j <= 9; j++)
					{
				/* print the two digits */
						putchar(i + '0');
						putchar(j + '0');
				/* if not the last pair, print comma and space */
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
				}
				}
	/* print a newline character at the end */
				putchar('\n');
	/*Return 0 Success code*/
				return (0);
}
