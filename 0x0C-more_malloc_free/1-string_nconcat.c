#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - The pointer function that combines strings
 * @s1: The first string to be combined
 * @s2: The second string to be combined
 * @n: The number which will be used for condtitional statement
 * Return: NULL if the function does not run.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;

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
	if (n < len2)
		result = malloc(sizeof(char) * (len1 + n + 1));
	else
	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		result[i] = s1[i];
	}
	for (; n < len2 && i < (len1 + n); n++, i++)
	{
	result[i] = s2[j];
	}
	result[i] = '\0';
	return (result);
}

