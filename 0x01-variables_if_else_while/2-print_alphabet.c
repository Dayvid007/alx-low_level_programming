#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 * Description: main -Prints out a string to stdout
 * Return: Always 0.
 */

int main(void)

{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
