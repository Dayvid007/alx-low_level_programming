#include <stdio.h>
#include "main.h"
/**
 *_strpbrk - The function pointer that helps in returing the string
 *@accept: The first function parameter
 *@s: Thhe second function parameter
 *Return: The eturn value should be equivalent to the string
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] !=  '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
