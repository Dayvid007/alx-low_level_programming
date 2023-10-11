#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - The function that intialize the variable
 * @d: The pointert to the struct d
 * @name: the pointer to the data type name
 * @age: The value fpr the data type of float
 * @owner: the pointer to the varible function
 * Return: 0 if sucessful.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
