#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - The name of the function that prints the name
 *@name: the first parameter of the function
 *@f: function to the pointer
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

