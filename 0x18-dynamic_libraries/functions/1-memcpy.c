#include "main.h"
/**
 * _memcpy- Copies the memory area
 * @dest: The memory you're copying to
 * @src: The memory area you're copying from
 * @n: The number of times to copy the src
 * Return: the Return value should be valid
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
