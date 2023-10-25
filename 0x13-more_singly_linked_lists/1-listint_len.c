#include "lists.h"
/**
 * listint_len -  The function that returns the total number of node
 * @h: the name of the function pointer
 * Return: The number of nodes of single list.
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while(h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
