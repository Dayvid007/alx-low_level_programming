#include "main.h"
/**
 *print_numbers - function that prints numbers 1 to 9
 */
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)

	{
		_putchar('0' + c);
		c++;
	}
	_putchar('\n');
}
