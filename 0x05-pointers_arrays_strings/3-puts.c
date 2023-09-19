#include "main.h"
/**
 *_puts- The name of the function that prints the pointer variable
 *@str: the parameter of the function
 *Return: The return value of the function is not going to ecist since i
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
