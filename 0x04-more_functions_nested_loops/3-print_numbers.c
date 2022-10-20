#include "main.h"
/**
 *print_numbers - function that prints numbers 1 to 9
 *@c: the int to print numbers 1 to 9
 *Return: returns a*b
 */
int print_numbers(int c)
{
	for (c = 0; c <= 9; c++)
		_putchar(c % 10 + '0');
		_putchar('\n');

	return (0);
}
