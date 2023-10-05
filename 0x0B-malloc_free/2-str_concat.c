#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - The function that combines two string
 * @s1: The first parameter
 * @s2: The second parameter
 * Return: NULL if unsucessful.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;

	int len2 = 0;

	int i, j, a, b;

	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= len1; a++)
	{
		result[a] = s1[a];
	}
	for (b = 0; b <= len2; b++)
	{
		result[len1 + b] = s2[b];
	}
	result[len1 + len2] = '\0';
	return (result);
}
