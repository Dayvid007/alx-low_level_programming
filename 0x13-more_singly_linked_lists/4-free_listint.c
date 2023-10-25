#include "lists.h"
/**
 * free_listint - The function that frees list
 * @head: The pointer to the param head
 * Return: The value of the node.
 */
void free_listint(listint_t *head)
{
	listint_t *pointerf;

	while (head)
	{
		pointerf = head->next;
		free(head);
		head = pointerf;
	}
}

