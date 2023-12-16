#include "main.h"
#include <stdio.h>

/**
 * _strchr - search character
 * @s : string s
 * @c: character to search
 * Return: return at first discovery
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
			return (s - 1);
		if (a == 0)
			return (NULL);
	}
}
