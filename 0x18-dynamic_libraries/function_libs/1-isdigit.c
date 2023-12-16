#include "main.h"
/**
 * _isdigit - check for digits
 * @c: parameter of the function
 * Return: return per instruction
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
