#include "main.h"
/**
 * print_rev-The function that prints strings in reverse
 * @s: The function parameter
 */
void print_rev(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}
for (int i = length - 1; i >= 0; i--)
{
_putchar(s[length]);
}
_putchar('\n');
}
