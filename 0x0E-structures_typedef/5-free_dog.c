#include "dog.h"
/**
 * free_dog - function frees variables of a struct from memory
 *
 * @d: pointe rot variable of a struct to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
