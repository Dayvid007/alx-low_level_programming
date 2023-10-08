#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * _calloc - The function that allocates memeory of an array
 * @nmemb: The first parameter of the function
 * @size: The second parameter of the function
 * Return: NULL if the function does not run.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	return (ptr);
}
