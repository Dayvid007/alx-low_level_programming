#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int bro;

	number = 1;
	for (bro = 1; bro <= power; bro++)
	{
		number *= base;
	}
	return (number);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divider, checkers;
	char flags;

	flags = 0;
	divider = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divider != 0)
	{
		checkers = n & divider;
		if (checkers == divider)
		{
			flags = 1;
			_putchar('1');
		}
		else if (flags == 1 || divider == 1)
		{
			_putchar('0');
		}
		divider >>= 1;
	}
}
