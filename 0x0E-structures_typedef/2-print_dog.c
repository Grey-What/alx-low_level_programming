#include "dog.h"
/**
 * print_dog - function prints elements of a struct dog
 *
 * @d: pointer to variable of struct dog to print
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);


}
