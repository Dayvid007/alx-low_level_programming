#include "lists.h"
/**
 * add_nodeint_end - The function that add node at end of a list
 * @head: The pointer to the function head
 * @n: the parameter of the function
 * Return: The number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t endall;
	listint_t brave = *head;

	endall = malloc(sizeof(listint_t));
	if (endall == NULL)
	{
		return (NULL);
	}
	endall->n = n;
	endall->next = NULL;
	if (*head == NULL)
	{
		*head = endall;
		return (endall);
	}
	while (brave->next)
	{
		brave = brave->next;
	}
	brave->next = endall;
	return (endall);
}
