#include "main.h"

int final_prime(int n, int k);

/**
 * is_prime_number - a function that returns a prime number.
 * @n: input value of n.
 * Return: if true return 1, otherwisse 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (final_prime(n, n - 1));
}

/**
 * final_prime - a function that returns a prime number.
 * @n: input value of n.
 * @k: iterator
 * Return: if true return 1, otherwisse 0
 */

int final_prime(int n, int k)
{
	if (k == 1)
	{
		return (1);
	}
	if (n % k == 0 && k > 0)
	{
		return (0);
	}
	return (final_prime(n, k - 1));
	if (k == 1)
	{
		return (1);
	}
	if (n % k == 0 && k > 0)
	{
		return (0);
	}
	return (final_prime(n, k - 1));
}
