#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - The function that creates an arrray of chars.
 * @size: The first parameter
 * @c: The second paarmeter
 * Return: vaue of NULL if 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;

char *p;

p = malloc(sizeof(char) * size);

if (size == 0 || p == NULL)
{
	return (NULL);
}
else
{
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
}
