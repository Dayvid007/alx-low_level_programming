#include "main.h"

/**
 *print_numbers - function that prints numbers 1 to 9
 * Return: 0 as success
 */
void print_numbers(void)
{
	int c;

	c = 0;

	while (c < 10)
	{
	_putchar(c + '0');
	c++;
	}
	_putchar('\n');
}
