#include "main.h"
/**
 * _islower - prints the alphabets in lower case
 * @c: is the character to be checked
 * Return: returns 0 if successful else return 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
		return (0);
}
