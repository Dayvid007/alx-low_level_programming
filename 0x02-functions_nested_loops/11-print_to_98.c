#include "main.h"
#include <stdio.h>
/**
 *ptint_out_98 - print out all natural numbers up to 98
 *@n: the number to start counting from n to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	for (n = n;  n < 98; n++)
	printf("%d", n);
	printf("%d\n", 98);
	}
	else
	{
	for (n = n; n > 98; n--)
	printf("%d", n);
	printf("%d\n", 98);
	}
}
