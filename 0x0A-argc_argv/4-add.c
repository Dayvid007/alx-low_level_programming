#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])

{
	int i;

	unsigned int ptr, addup = 0;

	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];
			for (ptr = 0; ptr < strlen(e); ptr++)
			{
				if (e[ptr] < 48 || e[ptr] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			addup += atoi(e);
			e++;
		}
		printf("%d\n", addup);
	}
	else
	{
		printf("0\n");
	}
return (0);
}
