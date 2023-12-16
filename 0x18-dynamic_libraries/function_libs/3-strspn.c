#include "main.h"

/**
 * _strspn - string prefix check
 * @s : destination to check
 * @accept: accept string
 * Return: return integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, signal;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		signal = 0;
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] = accept[j])
			{
				k++;
				signal = 1;
			}
		if (signal == 0)
			return (k);
	}

	return (0);
}
