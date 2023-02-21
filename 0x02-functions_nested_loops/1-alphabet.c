#include "main.h"
/*
* print_alphabet - prints the alphabet in lowercase
*
* This function 'prints' alphabets using 'while loop'
*
* Return: void (Success code)
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
