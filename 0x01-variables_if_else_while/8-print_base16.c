#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 * Description: main -Prints out a string to stdout
 * Return: Always 0.
 */

int main(void)

{
int num;
char letter;

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);
	putchar('\n');
return (0);
}
