#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the pointer that will be set
 * @to: pointer to the char that will be assigned to *s
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
/* "Set" the value of the 'pointer' pointed to by "s" to the value of 'to' */
*s = to;
}
