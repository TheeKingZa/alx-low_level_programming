#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i, j;

/* Iterate over rows (0 to 9) */
for (i = 0; i <= 9; i++)
{
/* Iterate over columns (0 to 9) */
for (j = 0; j <= 9; j++)
{
/* Calculate product and print with appropriate formatting */
int product = i * j;
if (j == 0)
{
printf("%2d", product);
}
else
{
printf(", %2d", product);
}
}
/* Move to the next row */
printf("\n");
}
}
