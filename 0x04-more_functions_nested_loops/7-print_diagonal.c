#include "main.h"

/**
 *print_diagonal - draws a diagonal linein the terminal
 *@c: number of time charcter '_'should be printed
 */
void print_diagonal(int c)
{
	if (c <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int n, m;
	for (n = 1; n < c; n++)
		{
	for (m = 0; m < c; m++)
	{
	if (m == n)
	_putchar('\\');
	else if (m < n)
	_putchar(' ');
	}
	_putchar('\n');
	}
	}
}
