#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints the minimum figureber of coins to
* make change for an amount of money
* @argc: figureber of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int figure, j, total;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	figure = atoi(argv[1]);
	total = 0;
	if (figure < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && figure >= 0; j++)
	{
		while (figure >= coins[j])
		{
			total++;
			figure -= coins[j];
		}
	}
	printf("%d\n", total);
	return (0);
}
