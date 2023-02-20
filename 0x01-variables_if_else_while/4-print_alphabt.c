#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints using the `putchar` function
 *
 * Return: 0 (Success code)
 */
int main(void)
{
				char letter; /*initial Letter to 'char'*/

				for (letter = 'a'; letter <= 'z'; letter++)/*for every letter it checks*/
				{
					if (letter != 'e' && letter != 'q')
						putchar(letter);/*if_then print result*/
				}
				putchar('\n');

				return (0);
/*return 0*/
}
