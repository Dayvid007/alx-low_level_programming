#include "main.h"
/**
 * _isalpha - funtion lrototypr
 * @c : function parameter
 * Return: return per instruction
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
