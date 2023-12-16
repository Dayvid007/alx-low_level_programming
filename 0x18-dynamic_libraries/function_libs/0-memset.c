#include "main.h"

/**
 * _memset - fill with a constant byte
 * @s : tge pointer
 * @b : what s points at
 * @n : size in bytes
 * Return: return pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
