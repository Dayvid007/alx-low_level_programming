#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - The function that returns the number of length
 * @h: The pointer to the structure list_t
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int length = 0;
	
	while(h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}

