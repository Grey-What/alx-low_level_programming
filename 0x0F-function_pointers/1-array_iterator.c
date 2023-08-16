#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function itterates through each element of array
 *
 * @array: array to be itterated
 * @size: size of array
 * @action: pointer to function that performs action on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
