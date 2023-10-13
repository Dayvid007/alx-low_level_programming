#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -  The function that prints strungs
 * @separator:parameter stirng used for seperating each string
 * @n: The number of aguments in string
 * Return: nothing since it is a void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	char *ptr;

va_start(list, n);
for (i = 0; i < n; i++)
{
ptr = va_arg(list, char *);

if (ptr == NULL)
{
printf("(nil)");
}
else
printf("%s", ptr);
if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(list);
}
