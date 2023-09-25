#include "main.h"
#include <stddef.h>
/**
 * *_strchr - a function that copies memory area.
 * @s: Tje memory area to be searched for
 * @c: The character that would be searched
 * Return: The value of the pointer if true and Null if false
 */

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return ((char*)&s[i]);
}
}
return (NULL);
}
