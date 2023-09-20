#include "main.h"
/**
 * puts2-  a function that reverses a string
 * @str: string
 * return: 0
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]));
}
_putchar('\n');
}


