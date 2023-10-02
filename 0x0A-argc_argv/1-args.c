#include <stdio.h>
#include "main.h"
/**
 * main - The function that prints size
 * @argc: The size of array
 * @argv: The array itself
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
