#include "main.h"
/**
 * _strlen-The function name that is used to count the number of strings
 * @s: the value of the string to get the length o
 * Return: The avalue shpuld return the number of char if succesful
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
