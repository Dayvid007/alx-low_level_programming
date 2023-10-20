#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - pointer to the function that adds node
 * @head: pointer to the pointer head
 * @str: pointer to he element str
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *ptr;

	while (str[len])
		len++;
	if (ptr == NULL)

		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = ptr;

	return (*head);
}


