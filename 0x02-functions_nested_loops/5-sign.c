#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: is the int to be checked
 * Return: 1 if n > o, else if return 0 if n = 0 ,else if return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
