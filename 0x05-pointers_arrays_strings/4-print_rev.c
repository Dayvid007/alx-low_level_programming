#include "main.h"
/**
 * print_rev-The function that prints strings in reverse
 * @s: The function parameter
 */
void print_rev(char *s)
{
int length = 0;

int i = length - 1;

while (s[length] != '\0')
{
length++;
}

while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
