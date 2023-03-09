#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical
 *           otherwise returns 0. s2 can contain the special character * which can
 *           replace any string (including an empty string).
 *
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 1 if the strings can be considered identical, otherwise returns 0.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
    {
        /* Both strings are empty, so they are identical */
        return 1;
    }
    else if (*s2 == '*')
    {
        /* Handle the case where the second string starts with a * character */
        if (*s1 == '\0')
        {
            /* If the first string is empty and the second string consists only of * characters, they are identical */
            while (*s2 == '*')
            {
                s2++;
            }
            return *s2 == '\0';
        }
        else
        {
            /* Otherwise, we can consider all possible suffixes of the first string and check if they match the remainder of the second string */
            while (*s1 != '\0')
            {
                if (wildcmp(s1, s2 + 1))
                {
                    return 1;
                }
                s1++;
            }
            return wildcmp(s1, s2 + 1);
        }
    }
    else if (*s1 != '\0' && (*s1 == *s2 || *s2 == '?'))
    {
        /* If the current characters in both strings match, or if the current character in the second string is a ?, continue comparing */
        return wildcmp(s1 + 1, s2 + 1);
    }
    else
    {
        /* Otherwise, the strings are not identical */
        return 0;
    }
}
