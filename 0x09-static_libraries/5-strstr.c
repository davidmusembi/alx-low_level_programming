#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 * If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
char *h = haystack;
char *n = needle;
while (*h)
{
n = needle;
h = haystack;
while (*n)
{
if (*h == *n)
{
n++;
h++;
}
else
break;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (0);
}
