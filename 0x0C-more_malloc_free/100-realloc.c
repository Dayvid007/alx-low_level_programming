#include"main.h"
#include <stdlib.h>
/**
 * _realloc - The funcito that reallocates memry address
 *@ptr: The memory address location
 *@old_size: name of the former function paraneter
 *@new_size: The name of the new function parameter
 *Return: NULL if the programme does not run.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;

	char *old_ptr;

	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
		free(ptr);
		return (NULL);
	pointer1 = malloc(new_size);
	if (pointer1 == NULL)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old _size)
		for (i = 0; i < new_size; i++)
			old_ptr[i] = pointer1[i];
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			old_ptr[i] = pointer1[i];
	}
	free(ptr);
	return (pointer1);
}
