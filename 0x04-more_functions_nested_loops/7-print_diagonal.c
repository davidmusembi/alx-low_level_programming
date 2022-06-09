#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *
 * @n: integer to set diagonal
 */
void print_diagonal(int n)
{
int a;
int b;
if
(n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
