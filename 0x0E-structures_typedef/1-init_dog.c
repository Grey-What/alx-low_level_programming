#include "dog.h"
/**
 * init_dog - function intializes a variable of struct dog
 *
 * @d: pointer to variable of struct dog
 * @name: name of dog
 * @age: age of a dog
 * @owner: name of owner of dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
