#include <unistd.h>
#include  "0-object_like_macro.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
README.md return (write(1, &c, 1));
}

