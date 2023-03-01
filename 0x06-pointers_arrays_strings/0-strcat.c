#include "main.h"
#include <stdio.h>
/**
 * Concatenates two strings.
 * 
 * @param dest Pointer to the destination string where the source string will be appended.
 * @param src Pointer to the source string that will be appended to the destination string.
 * 
 * @return Pointer to the resulting string dest.
 */
char* _strcat(char* dest, char* src)
{
/* Keep track of the original destination pointer to return at the end*/
char* dest_ptr = dest;
/* Advance the destination pointer to the end of the string */
while (*dest != '\0')
{
dest++;
}
/* Copy the source string to the end of the destination string */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
/* Terminate the concatenated string with a null byte */
*dest = '\0';
/* Return the original destination pointer */
return (dest_ptr);
}
