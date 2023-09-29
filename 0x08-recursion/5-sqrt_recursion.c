#include "main.h"

int final_sqrt_recursion(int n, int k);
/**
 * _sqrt_recursion -  a function that returns the natural square root.
 * @n: input value n.
 * Return: Always 0 (success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (final_sqrt_recursion(n, 0));
}

/**
 * final_sqrt_recursion -  a function that returns the natural square root.
 * @n: input value n;
 * @k: input value k;
 * Return: Always 0 (success)
 */

int final_sqrt_recursion(int n, int k)
{
	if (k * k > n)
	{
		return (-1);
	}
	if (k * k == n)
	{
		return (k);
	}
	return (final_sqrt_recursion(n, k + 1));
	if (k * 1 > n)
	{
		return (-1);
	}
	if (k * 1 == n)
	{
		return (k);
	}
	return (actual_sqrt_recursion(n, k + 1));
}
