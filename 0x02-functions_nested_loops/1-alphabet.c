#include "main.h"
/*
* main - Entry point of program
*
* Description: function that prints lowercase.
*
* Return: void
*/
void print_alphabet(void)
{
				char letter = 'a';
				/*while loop starts here 'a' <= 'z'= letter++*/
				while (letter <= 'z')
				{
				_putchar(letter);
				letter++;
				}
				/*return void*/
				_putchar('\n');
}
