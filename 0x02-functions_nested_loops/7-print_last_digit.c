#include "main.h"
/**
 * print_last_digit - prints last digit of a given value
 * @numb: the given value
 * Return: returns 0 if successful,otherwise 1
 */
int print_last_digit(int numb)
{
	int rem = numb % 10;

	if (rem < 0)

	{
	rem = -(rem);
	_putchar(rem + '0');
	return (rem);
	}
	else
	{
	_putchar(rem + '0');
	return (rem);
		}
}
