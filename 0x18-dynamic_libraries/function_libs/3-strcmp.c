#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: per length
 */

int _strcmp(char *s1, char *s2)
{
	char *i, *j;

	for (i = s1, j = s2; *i != '\0' && *j != '\0' && *i == *j; i++, j++)
	{
	}
	return (*i - *j);
}
