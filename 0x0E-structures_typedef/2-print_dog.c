#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog -  The function that prints the funciton
 * @d: The pointer f the struct dog
 * Return: 0 if success.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
