#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - The function that prints the structures
 * @h: The prinf function
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
