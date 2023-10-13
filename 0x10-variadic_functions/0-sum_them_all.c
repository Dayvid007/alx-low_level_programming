#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - The function that summ all arguments
 * @n: The argument of the function
 * Return: 0 if the function does not run
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	unsigned int sum = 0;

	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}
		va_end(list);
		return (sum);
}
