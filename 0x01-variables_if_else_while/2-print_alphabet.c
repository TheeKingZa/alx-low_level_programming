
#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: Print Letter using 'char'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
				char letter;

				for (letter = 'a'; letter <= 'z'; letter++)
					putchar(letter);/*putchar goes though letters*/

				putchar('\n');/*call putchar with a new line to print*/

				return (0);
/*return 0 as success exe*/
}
