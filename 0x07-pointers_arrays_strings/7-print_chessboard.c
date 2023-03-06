#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to an array of characters representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int row, col;
				/* Iterate over each row of the chess board */
for (row = 0; row < 8; row++)
{
				/* Iterate over each column of the current row */
for (col = 0; col < 8; col++)
{
				/* print using putchae the character at the current row+column */
putchar(a[row][col]);
}

				/* Move to the next row of the chessboard */
putchar('\n');
}
}
