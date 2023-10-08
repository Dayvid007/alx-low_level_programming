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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}
	for (; s1 && s1[len1]; len1++)
	for (; s2 && s2[len2]; len2++)
	if (n < len2)
		result = malloc(sizeof(char) * (len1 + n + 1));
	else
	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (; n < len2 && i < (len1 + n); i++, j++)
	{
		result[i] = s2[j];
	}
	for (; n >= len2 && i < (len1 + len2); i++, j++)
	{
		result[i] = s2[j];
	}
	result[i] = '\0';
	return (result);
}

