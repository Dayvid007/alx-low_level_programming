#include "main.h"
/**
 * _strlen_recursion - The fucntion that prints the total number
 * @s: The parameter of the function
 * Return: The value of the length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
