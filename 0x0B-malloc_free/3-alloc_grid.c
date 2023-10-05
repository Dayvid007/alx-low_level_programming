#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer.
 * @width: The width value
 * @height: The height value.
 * Return: Always 0 (success)
 */

int **alloc_grid(int width, int height)
{
	int **product;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	product = malloc(sizeof(int *) * height);

	if (product == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		product[a] = malloc(sizeof(int) * width);
		if (product[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(product[a]);
			}
			free(product);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			product[a][b] = 0;
	}
	return (product);
}
