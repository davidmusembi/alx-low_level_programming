#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to a character aka the character found
 */
char *_strchr(char *s, char c)
{
int b;
for (b = 0; s[b] != c; b++)
{
if (s[b] == '\0')
return ('\0');
}
return (s + b);
}
