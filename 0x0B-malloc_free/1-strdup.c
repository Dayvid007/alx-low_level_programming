#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Returns a function to a newly allocated sace
 * @str: This is the parameter of the function
 * Return: Null if not valid.
 */
char *_strdup(char *str)
{
	int length = 0;

	char *dup;

	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= length; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
