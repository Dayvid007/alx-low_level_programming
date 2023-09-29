#include "main.h"
/**
 * _puts_recursion - The function that prints a string
 * @s: The parameter of the funtion
 * Return: The return vlaue shuld be 0 if succes
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
	_putchar('\n');
}
}
