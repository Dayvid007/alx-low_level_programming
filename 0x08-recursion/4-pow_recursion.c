#include "main.h"
/**
 * _pow_recursion - The function used.
 * @y: hte second parameter used for the conditional statement
 * @x: The first parameter
 * Return: (-1) if y < 0 and 1 if y = 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
else if (y == 0)
{
	return (1);
}
else
{
	return (x * _pow_recursion(x, y - 1));
}
}
