#include "lists.h"
/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newslist;
	size_t j;

	newslist = malloc(size * sizeof(listint_t *));
	if (newslist == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		newslist[j] = list[j];
	newslist[j] = new;
	free(list);
	return (newslist);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t j, number = 0;
	listint_t **list = NULL;
	listint_t *forward;

	if (head == NULL || *head == NULL)
		return (number);
	while (*head != NULL)
	{
		for (j = 0; j < number; j++)
		{
			if (*head == list[j])
			{
				*head = NULL;
				free(list);
				return (number);
			}
		}
		number++;
		list = _ra(list, number, *head);
		forward = (*head)->next;
		free(*head);
		*head = forward;
	}
	free(list);
	return (number);
}
