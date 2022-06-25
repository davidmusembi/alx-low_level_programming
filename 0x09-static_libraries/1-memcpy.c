#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *mem = dest;
while (n--)
*dest++ = *src++;
return (mem);
}
