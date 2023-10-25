#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *ptr, *str;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		str = (*head)->next;
		free(*head);
		*head = str;
		return (1);
	}
	ptr = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	str = ptr->next;
	ptr->next = str->next;
	free(str);
	return (1);
}
