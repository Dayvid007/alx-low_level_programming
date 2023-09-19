#include "main.h"
/**
 * rev_string- The name of the function that is about
 *@s:one of the function of the parameter
 */
void rev_string(char *s)
{
int i;

int len = 0, index;

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
while (*s != '\0')
{
len++;
s++;
}
s--;

for (index = len; index > 0; index--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
