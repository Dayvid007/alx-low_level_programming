#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - The function that allocates memory
 * @b: The parameter of the function
 *Return: should be 98 if the program is null.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
