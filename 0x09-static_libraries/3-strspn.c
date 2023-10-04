#include "main.h"
/**
 * _strspn - The function that uses the function similar to that
 * @s: The first function parameter
 * @accept: The second function parameter
 * Return: The number of byte in the initial segment of which consists
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;

unsigned int j;

unsigned int count;

unsigned int value;

count = 0;

for (i = 0; s[i] != '\0'; i++)
{
value = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
count++;
value = 1;
}
}
if (value == 0)
{
return (count);
}
}
return (count);
}

