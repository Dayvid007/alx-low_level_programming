#include "main.h"

/**
 *print_square- prints a square in the terminal
 *@size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int n, m;
	for (n = 0; n < size; n++)
		{
	for (m = 0; m < size; m++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
