#include "main.h"
/**
 * _islower - print if lowercase
 * @c : parameter of tge function
 * Return: return 0
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
