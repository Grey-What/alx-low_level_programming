#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function initializes a variable of struct dog
 *
 * @d: pointer to struct variable
 * @name: pointer to string containing name of dog
 * @age: age of dog
 * @owner: pointer to string containing name of owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
