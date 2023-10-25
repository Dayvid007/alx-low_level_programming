#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - The function that prints the elements
 * @h: The pointer to the function h
 * Return: the total nimber of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

