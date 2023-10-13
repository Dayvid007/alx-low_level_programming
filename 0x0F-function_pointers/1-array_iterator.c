#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that executes a function
 * @size: This is the size of the given array
 * @action: The pointer to a function
 * @array: The parameter array of the function
 * Return : nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
