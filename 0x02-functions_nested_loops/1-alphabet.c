#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: function prints alphabets
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
