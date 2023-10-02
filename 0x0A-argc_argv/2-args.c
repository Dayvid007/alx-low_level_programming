#include "main.h"
#include <stdio.h>
/**
 * main - The function that prints every string
 * @argc: The size of the array
 * @argv: The number of the arraty
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

