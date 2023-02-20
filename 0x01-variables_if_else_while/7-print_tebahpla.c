#include <stdio.h>

/**
* main - Entry point
*
* Description: print using 'putchar' declare with 'char'
*
* Return: Always 0 (Success code)
*/
int main(void)
{
				char letter;  /* declare a char variable to hold the current letter*/

				/*loop from 'z' to 'a' (in reverse order)*/
				for (letter = 'z'; letter >= 'a'; letter--)
				{
					putchar(letter);  /* print the current letter using putchar*/
				}
				putchar('\n');  /* print a newline character using putchar*/
				return (0);
				/* Return 0 Success code*/
}
