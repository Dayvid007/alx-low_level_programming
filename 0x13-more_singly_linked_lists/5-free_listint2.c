#include "lists.h"
/**
 * free_listint2 - The function that frees list
 * @head: The pointer to the param head
 * Return: The value of the node.
 */
void free_listint2(listint_t **head)
{
	listint_t *pointerf;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		pointerf = (*head)->next;
		free(*head);
		*head = pointerf;
	}
	*head = NULL;
}
