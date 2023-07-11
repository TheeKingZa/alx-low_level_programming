#include <stdio.h>
/**
 * main - Entry Point of program
 *
 * Description: Putchar 'print' numbers
 *
 * Return: 0 (Success code)
 */
int main(void)
{
				int i; /*Declaration (i)*/

				for (i = 0; i < 10; i++)  /*loop starts i= 0 as long i < 10 add by 1*/
				{
				putchar(i + '0');
				}
				/*prints numbers*/
				putchar('\n');

				return (0);
/*Return 0 (Success code)*/
}
