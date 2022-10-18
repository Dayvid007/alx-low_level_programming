#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 * Description: main -Prints out a string to stdout
 * Return: Always 0.
 */
int main(void)
{
	int digit1 = '0';
	int digit2 = '0';
	int digit3 = '0';

	for (digit3 = 0; digit3 <= 9; digit3++)
{
	for (digit2 = 0; digit2 <= 9; digit2++)
{
	for (digit1 = 0; digit1 <= 9; digit1++)
{
	if (!((digit1 == digit2) || (digit3 == digit2) ||
	(digit2 > digit1) || (digit3 > digit2)))
	{
		putchar(digit3);
		putchar(digit2);
		putchar(digit1);
	}
	if (!(digit1 == '9' && digit2 == '8' && digit3 == '7'))
		{
		putchar(',');
		putchar(' ');

		}
	}
}
}	

	putchar('\n');
return (0);
}
