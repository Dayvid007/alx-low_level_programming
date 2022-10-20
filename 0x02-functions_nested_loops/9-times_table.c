#include "main.h"
#include <stdio.h>
/**
 *  times_table - prints every minute of the d
 *
 */

void times_table(void)
{
	int num1 = 0;
	int num2;
	int n;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
		n = num1 * num2;
		if (n > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (num2 != 0)
		{
		_putchar(' ');
		_putchar(n + '0');
		}
		else
		{
		_putchar(n + '0');
		}
		if (num2 != 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		num2++;
		}
	_putchar('\n');
	num1++;
	}
}
