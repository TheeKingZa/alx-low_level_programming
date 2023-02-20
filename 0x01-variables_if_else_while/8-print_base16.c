#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
				int i;
				/* Declaration (int i) */
				for (i = 0; i < 10; i++)
					putchar(i + '0'); /* print numbers 0-9 */
				for (i = 'a'; i < 'g'; i++)
					putchar(i); /* print letters a-f */
				putchar('\n');
				/* print newline character */
				return (0);
				/*Return 0 Success*/
}
