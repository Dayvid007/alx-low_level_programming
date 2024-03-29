#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - The function that prints numbers
 * @separator: The fuction parameter
 * @n: The argument of the variadic function
 * Return: none since it is a void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;

unsigned int i;

va_start(list, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
