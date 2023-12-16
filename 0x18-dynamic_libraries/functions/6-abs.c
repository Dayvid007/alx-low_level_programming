#include "main.h"
/**
 * _abs - checks the absolute value of an int
 * @k: the int that is to be checked
 * Return: -k if true, else returns k
 */
int _abs(int k)
{
	if (k < 0)
	{
		return (-(k));
	}
	else
	{
		return (k);
	}
}
