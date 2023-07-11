#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A function pointer that specifies the printing method.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	f(name);
}


