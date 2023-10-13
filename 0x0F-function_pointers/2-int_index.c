#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - The function that searches for an integer
 * @array: The pararmeter of the function.
 * @size: the number of elements of the function
 * @cmp: The pointer to function
 * Return: -1 if not sucessful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
