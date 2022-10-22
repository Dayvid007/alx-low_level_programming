#include "main.h"

/**
 *print_line - draws a straight linein the terminal
 *@c: number of time charcter '_'should be printed
 */
void print_line(int c)
{
	if (c <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int n;
	for (n = 1; n <= c; n++)
		{
	_putchar('_');
		}
	_putchar('\n');
	}
}
