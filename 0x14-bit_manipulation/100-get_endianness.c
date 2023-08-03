#include "main.h"

/**
 * get_endianness - check if a machine little or big endian.
 *
 * Return: 0 Big, 1 little.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
