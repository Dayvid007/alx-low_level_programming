#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - pointer to the function that adds node
 * @head: pointer to the pointer head
 * @str: pointer to he element str
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len = 0;


	while (str[len])
		len++;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)

		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}


