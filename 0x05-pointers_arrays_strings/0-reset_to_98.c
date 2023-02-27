#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - Updates the value of an integer to 98
 * @n: Pointer to the integer to be updated
 *
 * Description: This function takes a pointer to an integer as parameter and
 * updates the value it points to to 98.
 */
void reset_to_98(int *n)
{
		*n = 98;  /* Dereference the pointer to update the value it points to */
}
