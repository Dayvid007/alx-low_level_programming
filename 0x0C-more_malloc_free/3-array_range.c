#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - The function that creates an array of integers
 * @min: the first element of the array
 * @max: The last element of the array
 * Return: NULL if unsuccesful.
 */
int *array_range(int min, int max)
{
	int *ptr;

	int j, arr_size;

	if (min > max)
	{
		return (NULL);
	}
	arr_size = max - min + 1;
	ptr = malloc(sizeof(int) * arr_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
